// 函数: ___free_lconv_num
// 地址: 0x75169c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 

int32_t eax_1 = *arg1

if (eax_1 != data_b4c190)
    _free(eax_1)

int32_t eax_2 = arg1[1]

if (eax_2 != data_b4c194)
    _free(eax_2)

int32_t eax_3 = arg1[2]

if (eax_3 != data_b4c198)
    _free(eax_3)

int32_t eax_4 = arg1[0xc]

if (eax_4 != data_b4c1c0)
    _free(eax_4)

int32_t eax = arg1[0xd]

if (eax != data_b4c1c4)
    _free(eax)
