// 函数: sub_4655f0
// 地址: 0x4655f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_7031bc
int32_t esi = 0
int32_t var_10 = 0

if (ecx s<= 0)
    return 

void* ebx_1 = &data_98c6dc
void* var_c_1 = &data_98c998
void* edi_1 = &data_72dd84
void* var_8_1 = &data_72dd0c

do
    int32_t eax_1 = *(edi_1 - 0x6c8)
    
    if (eax_1 u<= 9)
        uint32_t eax_2 = zx.d(lookup_table_465850[eax_1])
        
        switch (eax_2)
            case 0
                sub_463970(eax_2, 1, esi, 0)
            case 1
                int32_t var_28_1 = ecx
                sub_464a10(edi_1 - 0x6c4, 1, esi, *(edi_1 - 0x6cc), edi_1 - 0x6c4, 
                    *(edi_1 - 0x658), edi_1 - 0x6a0, edi_1 - 0x67c, 0)
            case 2
                int32_t eax_6 = *(edi_1 - 0x6cc)
                
                if (esi s>= 0 && esi s< ecx)
                    sub_463970(eax_6, 1, esi, 0)
                    *(var_8_1 - 4) = eax_6
                    *var_8_1 = eax_6
                    *var_c_1 = *(var_c_1 + 0x8c) + 1
            case 3
                int32_t var_28_2 = ecx
                sub_464d10(eax_2, 1, esi, *(edi_1 - 0x6cc), *(edi_1 - 0x654), 0)
    
    *(edi_1 - 0x84) = *(edi_1 - 0x6d4)
    int32_t eax_11 = *(edi_1 - 0x6d0)
    *(edi_1 - 0x80) = eax_11
    sub_4d1c30(eax_11, edi_1 - 0x650, edi_1, 0xc8)
    sub_4d1c30(eax_11, edi_1 - 0x588, edi_1 + 0xc8, 0xfc)
    sub_4d1c30(eax_11, edi_1 - 0x48c, edi_1 + 0x1c4, 0x78)
    sub_4d1c30(eax_11, edi_1 - 0x414, edi_1 + 0x23c, 0x378)
    sub_4d1c30(eax_11, edi_1 - 0x9c, edi_1 + 0x5b4, 0x18)
    sub_4d6c40(ebx_1 - 4, ebx_1)
    char* ecx_13 = *(ebx_1 - 0x7a0)
    char* var_14_2 = ecx_13
    
    if (ecx_13 != 0)
        int32_t esi_1 = 0
        char* eax_12 = ecx_13
        
        if (*ecx_13 != 0)
            do
                ecx_13.b = *eax_12
                
                if (ecx_13.b u< 0x80)
                    esi_1 += 1
                    eax_12 = &eax_12[1]
                else if (ecx_13.b u< 0xa0)
                    if (ecx_13.b u>= 0xfe)
                        esi_1 += 1
                        eax_12 = &eax_12[1]
                    else
                        esi_1 += 2
                        eax_12 = &eax_12[2]
                else if (ecx_13.b u<= 0xdf || ecx_13.b u>= 0xfe)
                    esi_1 += 1
                    eax_12 = &eax_12[1]
                else
                    esi_1 += 2
                    eax_12 = &eax_12[2]
            while (*eax_12 != 0)
        
        sub_4d1c30(sub_4d6960(eax_12, ebx_1, ebx_1 - 4, esi_1 + 1, "objmoji01"), var_14_2, *ebx_1, 
            esi_1 + 1)
        esi = var_10
    
    if (*(edi_1 - 0x78) == 8)
        sub_477bb0(ebx_1 + 0x23c, 1, esi, ebx_1 + 0x23c, ebx_1 - 0x564)
    
    var_8_1 += 0xca0
    esi += 1
    var_c_1 += 0xf40
    edi_1 += 0xca0
    ecx = data_7031bc
    ebx_1 += 0xf40
    var_10 = esi
while (esi s< ecx)
