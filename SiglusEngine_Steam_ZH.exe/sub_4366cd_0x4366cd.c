// 函数: sub_4366cd
// 地址: 0x4366cd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = *(arg1 + 0x30)

if (ecx != 0)
    sub_433cd7(ecx, 1)
    *(arg1 + 0x30) = 0

void* ecx_1 = *(arg1 + 0x2c)

if (ecx_1 != 0)
    sub_435d03(ecx_1, 1)
    *(arg1 + 0x2c) = 0

if (*(arg1 + 0x34) != 0)
    int32_t edi
    int32_t var_c_1 = edi
    
    do
        void* edi_1 = *(arg1 + 0x34)
        *(arg1 + 0x34) = *(edi_1 + 0x34)
        *(edi_1 + 0x34) = 0
        sub_4366cd()
        j__free(edi_1)
    while (*(arg1 + 0x34) != 0)

return sub_43322e(arg1) __tailcall
