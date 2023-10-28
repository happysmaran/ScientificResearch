#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>

using namespace std::chrono;
using namespace std;
 
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
// A utility function to print an array
// of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
// Driver code
int main()
{
    int arr[] = { 1668, 480, 12, 986, 184, 399, 77, 52, 491, 849, 452, 727, 522, 625, 583, 837, 498, 98, 255, 793, 765, 549, 903, 346, 166, 232, 297, 67, 658, 574, 50, 446, 440, 805, 16, 683, 707, 288, 448, 689, 276, 825, 53, 641, 400, 599, 299, 963, 720, 564, 973, 922, 192, 85, 623, 360, 552, 602, 698, 932, 992, 699, 419, 696, 804, 403, 657, 42, 2, 121, 358, 761, 674, 325, 414, 277, 936, 383, 993, 631, 373, 261, 128, 279, 676, 591, 94, 176, 160, 256, 163, 844, 692, 421, 302, 25, 619, 423, 838, 711, 428, 109, 962, 651, 393, 728, 185, 191, 75, 453, 682, 342, 595, 449, 483, 544, 553, 518, 813, 458, 534, 38, 314, 688, 341, 301, 890, 312, 157, 389, 259, 532, 397, 73, 504, 751, 896, 39, 272, 254, 462, 638, 611, 766, 822, 879, 11, 116, 18, 395, 307, 580, 826, 597, 247, 89, 670, 604, 771, 537, 88, 178, 824, 934, 933, 177, 351, 17, 652, 523, 467, 787, 413, 685, 416, 558, 257, 724, 386, 362, 780, 850, 99, 291, 364, 332, 941, 538, 209, 482, 846, 320, 952, 372, 368, 531, 918, 745, 405, 182, 472, 902, 374, 391, 542, 546, 441, 122, 915, 376, 237, 114, 309, 303, 349, 306, 733, 134, 251, 812, 187, 950, 912, 143, 57, 66, 321, 463, 743, 26, 44, 680, 464, 402, 438, 859, 746, 873, 476, 798, 550, 589, 280, 378, 757, 545, 60, 723, 815, 951, 590, 987, 990, 660, 673, 633, 884, 919, 133, 752, 971, 811, 876, 43, 691, 794, 125, 268, 363, 865, 948, 567, 541, 308, 61, 495, 536, 521, 706, 68, 897, 142, 5, 271, 316, 200, 20, 718, 998, 215, 664, 216, 507, 33, 335, 968, 412, 457, 500, 9, 592, 883, 110, 79, 87, 380, 274, 40, 785, 913, 477, 345, 713, 329, 499, 387, 996, 690, 576, 820, 359, 910, 243, 111, 621, 46, 1000, 164, 985, 292, 956, 697, 80, 808, 455, 970, 930, 120, 980, 107, 722, 575, 473, 70, 51, 958, 517, 366, 601, 566, 568, 431, 147, 32, 895, 197, 106, 644, 714, 905, 375, 634, 326, 267, 131, 645, 219, 305, 721, 258, 505, 772, 220, 967, 217, 315, 661, 273, 966, 384, 343, 155, 554, 969, 510, 612, 636, 466, 760, 828, 972, 855, 829, 427, 892, 768, 333, 556, 488, 596, 737, 965, 606, 561, 298, 734, 571, 852, 669, 230, 459, 762, 888, 124, 323, 415, 108, 779, 791, 834, 135, 675, 871, 617, 548, 406, 486, 286, 221, 317, 866, 976, 648, 101, 117, 284, 228, 520, 29, 41, 181, 190, 957, 262, 931, 665, 535, 823, 921, 468, 898, 749, 687, 512, 324, 999, 275, 649, 600, 289, 126, 942, 786, 266, 778, 639, 223, 693, 115, 628, 233, 156, 318, 365, 586, 410, 207, 475, 104, 742, 979, 92, 916, 138, 816, 356, 127, 388, 296, 744, 719, 248, 750, 814, 940, 129, 82, 878, 56, 663, 635, 71, 960, 227, 103, 782, 105, 479, 149, 429, 642, 640, 982, 49, 920, 213, 489, 390, 494, 607, 709, 211, 404, 123, 100, 118, 819, 59, 845, 226, 445, 30, 264, 313, 347, 989, 738, 740, 858, 235, 788, 222, 945, 246, 456, 944, 717, 984, 886, 239, 234, 174, 204, 565, 492, 796, 282, 487, 295, 361, 506, 113, 179, 800, 260, 609, 225, 352, 249, 385, 570, 622, 263, 773, 701, 112, 398, 195, 83, 418, 8, 148, 835, 650, 899, 199, 514, 882, 493, 562, 917, 748, 526, 875, 93, 65, 666, 10, 158, 293, 954, 809, 350, 208, 894, 382, 162, 430, 539, 817, 710, 747, 443, 334, 678, 173, 407, 513, 203, 516, 679, 810, 367, 24, 853, 767, 843, 170, 437, 864, 774, 877, 988, 681, 630, 394, 914, 119, 3, 245, 451, 193, 426, 519, 229, 330, 753, 997, 34, 265, 58, 369, 807, 995, 336, 759, 154, 790, 775, 598, 27, 425, 712, 503, 165, 563, 171, 439, 861, 236, 893, 854, 974, 909, 573, 285, 508, 994, 47, 939, 169, 695, 357, 926, 869, 139, 637, 585, 755, 460, 943, 716, 831, 371, 839, 130, 608, 731, 354, 655, 874, 911, 396, 37, 78, 964, 981, 144, 55, 370, 684, 189, 862, 74, 28, 889, 587, 702, 63, 881, 872, 23, 594, 818, 730, 627, 218, 732, 206, 432, 86, 270, 551, 48, 401, 290, 461, 923, 836, 870, 725, 172, 524, 502, 527, 703, 929, 381, 69, 938, 978, 444, 704, 469, 900, 344, 851, 338, 533, 168, 983, 175, 632, 242, 547, 739, 4, 647, 6, 186, 530, 860, 64, 781, 132, 887, 643, 646, 540, 328, 355, 13, 559, 102, 319, 501, 946, 287, 856, 959, 868, 758, 62, 955, 857, 629, 795, 572, 465, 97, 238, 626, 806, 756, 478, 214, 90, 901, 949, 36, 244, 764, 593, 555, 799, 205, 603, 146, 450, 331, 496, 339, 777, 842, 509, 194, 327, 15, 337, 769, 977, 91, 198, 153, 578, 436, 891, 136, 610, 776, 442, 54, 620, 581, 667, 803, 411, 847, 613, 201, 708, 188, 543, 183, 322, 210, 202, 84, 653, 736, 45, 81, 424, 797, 953, 447, 961, 474, 840, 1, 340, 434, 615, 141, 789, 729, 741, 159, 31, 659, 579, 801, 294, 588, 420, 735, 557, 770, 379, 841, 827, 662, 792, 928, 654, 672, 470, 700, 560, 231, 300, 224, 152, 14, 497, 485, 21, 481, 250, 577, 72, 880, 311, 935, 529, 35, 241, 991, 907, 96, 947, 705, 454, 694, 784, 515, 677, 22, 924, 252, 240, 832, 618, 726, 904, 471, 715, 145, 848, 150, 908, 885, 490, 605, 348, 310, 614, 927, 624, 937, 281, 433, 511, 283, 821, 269, 140, 435, 212, 783, 76, 754, 377, 417, 671, 528, 7, 408, 422, 656, 353, 161, 582, 409, 484, 19, 278, 253, 151, 180, 802, 616, 137, 867, 686, 763, 196, 569, 304, 392, 525, 863, 584, 975, 830, 95, 833, 906, 167, 925 };
    int N = sizeof(arr) / sizeof(arr[0]);
    auto start = high_resolution_clock::now();
 
    insertionSort(arr, N);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);

    cout << "Time taken by function: " << duration.count() << " nanoseconds" << endl;
    //printArray(arr, N);
 
    return 0;
}