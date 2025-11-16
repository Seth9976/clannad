// 函数: sub_4608e1
// 地址: 0x4608e1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0)
    return 0x88760385

int32_t* eax_1 = *(arg1 + 0x2c)

if (eax_1 == 0 || arg2 u>= *eax_1)
    return 0x88760393

int32_t* eax_3 = *(eax_1[3] + (arg2 << 2))
(**eax_3)(eax_3, &data_ac38c4, arg3)
return 0
