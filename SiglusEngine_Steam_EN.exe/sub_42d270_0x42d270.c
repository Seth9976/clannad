// 函数: sub_42d270
// 地址: 0x42d270
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = arg1

if (arg1 u> 1)
    return 

int32_t eax_1 = (&data_ef08e8)[arg1 * 0x60]
int32_t* eax_2 = eax_1 - 1

if (eax_1 == 1)
    int32_t* edi_1 = *(arg1 * 0x180 + 0xef08ec)
    
    if (edi_1 u<= 0x1ff)
        eax_2 = sub_425430(edi_1, 1)
        
        if (*(edi_1 * 0x74 + 0x13747b0) != 0)
            eax_2 = sub_427c30(edi_1 * 0x74 + 0x13747b0, arg1 * 0x180 + 0xef0950)
    
    sub_41cd30(eax_2, arg1 * 0x180 + 0xef09dc, arg1 * 0x180 + 0xef0950, nullptr, nullptr)
else if (eax_2 == 1)
    sub_430130(&(&data_ef08f8)[arg1 * 0x60])
