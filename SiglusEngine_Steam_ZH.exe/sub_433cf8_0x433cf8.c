// 函数: sub_433cf8
// 地址: 0x433cf8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = *(arg1 + 0x28)

if (ecx != 0)
    sub_433cd7(ecx, 1)
    *(arg1 + 0x28) = 0

if (*(arg1 + 0x2c) != 0)
    int32_t edi
    int32_t var_8_1 = edi
    
    do
        void* edi_1 = *(arg1 + 0x2c)
        *(arg1 + 0x2c) = *(edi_1 + 0x2c)
        *(edi_1 + 0x2c) = 0
        sub_433cf8()
        j__free(edi_1)
    while (*(arg1 + 0x2c) != 0)

return sub_43322e(arg1) __tailcall
