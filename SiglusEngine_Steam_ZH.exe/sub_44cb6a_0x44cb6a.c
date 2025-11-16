// 函数: sub_44cb6a
// 地址: 0x44cb6a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x3c) != 0)
    int32_t edi
    int32_t var_8_1 = edi
    
    do
        void* edi_1 = *(arg1 + 0x3c)
        *(arg1 + 0x3c) = *(edi_1 + 0x3c)
        *(edi_1 + 0x3c) = 0
        sub_44cb6a()
        j__free(edi_1)
    while (*(arg1 + 0x3c) != 0)

void* ecx_2 = *(arg1 + 0x40)

if (ecx_2 != 0)
    sub_42a0e7(ecx_2, 1)
    *(arg1 + 0x40) = 0

return sub_44bad4(arg1) __tailcall
