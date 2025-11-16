// 函数: sub_43338b
// 地址: 0x43338b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi

while (*(arg1 + 0x30) != 0)
    void* edi_1 = *(arg1 + 0x30)
    *(arg1 + 0x30) = *(edi_1 + 0x30)
    *(edi_1 + 0x30) = 0
    sub_43338b()
    j__free(edi_1)

while (*(arg1 + 0x34) != 0)
    void* edi_2 = *(arg1 + 0x34)
    *(arg1 + 0x34) = *(edi_2 + 0x34)
    *(edi_2 + 0x34) = 0
    sub_43338b()
    j__free(edi_2)

return sub_43322e(arg1) __tailcall
