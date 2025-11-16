// 函数: sub_45b340
// 地址: 0x45b340
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t eax_1 = sub_496b50(eax, 1, arg1, 1, 0)
int32_t eax_2 = eax_1

if (eax_1 != 0)
    int32_t temp1_1 = eax_2
    eax_2 -= 1
    
    if (temp1_1 == 1)
        for (int32_t i = 0; i s< 0x10; i += 1)
            sub_41e520(i, 0)
        
        sub_41df00()
        sub_49d030()
        sub_4a1e40(5)
        int32_t var_48 = arg1
        int32_t var_44 = 1
        char* eax_3 = sub_48d040(0x16, &var_48)
        data_1332b30 = 0
        data_1321ecc = 0
        data_1332b34 = 0
        data_1332b3c = 0
        data_1332b38 = 0
        data_71929c = 0x1b
        data_7192a0 = 0
        data_7192e0 = 0
        return eax_3
else if (data_702fc0 != 0)
    sub_55f390(
        sub_55f1e0(sub_55ef70(eax_2, data_72d6ac, data_719b6c, 0x6197c4, &data_6191cc), 
            data_72d6ac, data_719b6c, 0x6197c4, &data_6191cc), 
        data_72d6ac, data_719b6c, 0x6197c4, &data_6191cc)
    return sub_4a1e40(3)

return eax_2
