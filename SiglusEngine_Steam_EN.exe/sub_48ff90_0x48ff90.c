// 函数: sub_48ff90
// 地址: 0x48ff90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = data_1311178 == 0
data_1af1774 = 0xffffffff
int32_t eax

if (cond:0)
    eax = data_1af1778
    int32_t* ecx
    int32_t edx
    
    if (eax u<= 3)
        switch (eax)
            case 0
                sub_48fd90(eax, edx, ecx, data_108f364, data_108f368, 2, 2)
                return 
            case 1
                sub_48fd90(eax, edx, ecx, data_108f370, data_108f374, 3, 3)
                return 
            case 2
                sub_48fd90(eax, edx, ecx, data_108f37c, data_108f380, 3, 3)
                return 
            case 3
                sub_48fd90(eax, edx, ecx, data_108f388, data_108f38c, 3, 3)
                return 
    else if (data_702fc0 != 0)
        int32_t var_1c_2 = 0x61ac24
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax, data_72d6ac, data_719b6c, &data_61acf0, 0x61ac24), 
                data_72d6ac, data_719b6c, &data_61acf0, 0x61ac24), 
            data_72d6ac, data_719b6c, &data_61acf0, 0x61ac24)
        sub_4a1e40(3)
else if (data_702fc0 != 0)
    int32_t var_1c_1 = 0x61ac24
    sub_55f390(
        sub_55f1e0(sub_55ef70(eax, data_72d6ac, data_719b6c, &data_61acc0, 0x61ac24), data_72d6ac, 
            data_719b6c, &data_61acc0, 0x61ac24), 
        data_72d6ac, data_719b6c, &data_61acc0, 0x61ac24)
    sub_4a1e40(3)
data_976f90 = 1
