// 函数: sub_4c6c51
// 地址: 0x4c6c51
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_10 = edi
void* j_1 = arg3
void* esi = arg1
void* var_8_1 = esi

if (j_1 != 0 && arg2 == 0)
    return 0x80004005

if (j_1 == 0xffffffff)
    char* eax_2 = arg2
    void* edx_1 = &eax_2[1]
    
    do
        arg1.b = *eax_2
        eax_2 = &eax_2[1]
    while (arg1.b != 0)
    
    arg3 = eax_2 - edx_1 + 1
    j_1 = eax_2 - edx_1 + 1

if ((arg4 & 1) == 0)
    arg4.d |= 2

if ((arg4 & 2) != 0)
    for (int32_t* i = *(esi + 8); i != 0; i = i[4])
        if ((i[2].b & 2) != 0 && j_1 == i[1])
            char* esi_1 = arg2
            void* j = j_1
            char* edi_1 = *i
            bool cond:4_1 = true
            
            while (j != 0)
                char temp1_1 = *esi_1
                char temp2_1 = *edi_1
                cond:4_1 = temp1_1 == temp2_1
                esi_1 = &esi_1[1]
                edi_1 = &edi_1[1]
                j -= 1
                
                if (temp1_1 != temp2_1)
                    break
            
            if (cond:4_1)
                if (arg5 != 0)
                    *arg5 = i[3]
                
                if ((arg4 & 1) != 0 && (arg4 & 8) != 0)
                    j__free(arg2)
                
                return 0
            
            j_1 = arg3
            esi = var_8_1

int32_t* eax_5 = sub_745f3f(0x14)

if (eax_5 != 0)
    if ((arg4 & 1) != 0)
        *eax_5 = arg2
    label_4c6d45:
        int32_t eax_10 = arg4.d
        
        if ((eax_10.b & 4) == 0)
            *(esi + 4) = (*(esi + 4) + 3) & 0xfffffffc
        
        int32_t ecx_12 = *(esi + 4)
        eax_5[2] = eax_10
        eax_5[4] = 0
        eax_5[3] = ecx_12
        eax_5[1] = j_1
        int32_t** ecx_13 = *(esi + 0xc)
        *(esi + 4) += j_1
        *ecx_13 = eax_5
        *(esi + 0xc) = &eax_5[4]
        
        if (arg5 != 0)
            *arg5 = eax_5[3]
        
        return 0
    
    int32_t eax_7 = sub_745f3f(j_1)
    *eax_5 = eax_7
    
    if (eax_7 != 0)
        int32_t esi_3
        int32_t edi_3
        edi_3, esi_3 = __builtin_memcpy(eax_7, arg2, j_1 u>> 2 << 2)
        __builtin_memcpy(edi_3, esi_3, j_1 & 3)
        j_1 = arg3
        esi = var_8_1
        goto label_4c6d45
    
    j__free(eax_5)

return 0x8007000e
