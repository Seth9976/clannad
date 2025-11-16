// 函数: sub_4996f0
// 地址: 0x4996f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg1
int32_t* var_10 = edi
int32_t i = sub_499600(arg1)
sub_4d1c30(i, arg2, edi, 0x4c)
*edi = 0
edi[1] = 0

if (*(arg2 + 4) != 0)
    uint32_t eax = edi[2] * 0x2c
    sub_4d6960(eax, &edi[1], edi, eax, "AVG_SEL_BACKUP")
    void* ebx_1 = *(arg2 + 4)
    i = 0
    void* esi_1 = edi[1]
    int32_t i_1 = 0
    
    if (edi[2] s> 0)
        do
            sub_4d1c30(i, ebx_1, esi_1, 0x2c)
            *(esi_1 + 0x20) = 0
            *(esi_1 + 0x24) = 0
            char* ecx_3 = *(ebx_1 + 0x24)
            
            if (ecx_3 != 0)
                uint32_t eax_1 = sub_4cfc80(ecx_3)
                sub_4d1c30(
                    sub_4d6960(eax_1, esi_1 + 0x24, esi_1 + 0x20, eax_1, "AVG_SEL_BACKUP_STR"), 
                    ecx_3, *(esi_1 + 0x24), eax_1)
                i = i_1
                edi = var_10
            
            i += 1
            ebx_1 += 0x2c
            esi_1 += 0x2c
            i_1 = i
        while (i s< edi[2])

return i
