// 函数: sub_433310
// 地址: 0x433310
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x28) != 0)
    int32_t edi
    int32_t var_8_1 = edi
    
    do
        void* edi_1 = *(arg1 + 0x28)
        *(arg1 + 0x28) = *(edi_1 + 0x28)
        *(edi_1 + 0x28) = 0
        sub_433310()
        j__free(edi_1)
    while (*(arg1 + 0x28) != 0)

return sub_43322e(arg1) __tailcall
