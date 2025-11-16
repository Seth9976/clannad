// 函数: sub_466450
// 地址: 0x466450
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0x69] != 0)
label_46646d:
    void* ecx_1 = arg1[0x6f]
    int32_t eax_2 = *(ecx_1 + 0x14)
    int32_t edi
    int32_t var_c_2 = edi
    
    if (arg1[0x69] == eax_2 + 0xd0)
        void* eax_3 = *arg1
        *(eax_3 + 0x14) = 0x62
        *(eax_3 + 0x18) = *(ecx_1 + 0x14)
        (*(eax_3 + 4))(arg1, 3)
        arg1[0x69] = 0
    label_4664a7:
        void* esi_1 = arg1[0x6f]
        *(esi_1 + 0x14) = (*(esi_1 + 0x14) + 1) & 7
        return 1
    
    if ((*(arg1[6] + 0x14))(arg1, eax_2) != 0)
        goto label_4664a7
else if (sub_465f90(arg1) != 0)
    goto label_46646d

return 0
