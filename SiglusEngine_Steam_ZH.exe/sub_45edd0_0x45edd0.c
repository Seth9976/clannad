// 函数: sub_45edd0
// 地址: 0x45edd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = nullptr
int32_t edi
int32_t var_20 = edi
int32_t* var_8 = nullptr

if (arg2 u> 0)
    int32_t* edi_2 = &arg1[0x11]
    void** i_2 = arg2
    void** i
    
    do
        char* eax_1 = *edi_2
        
        if (eax_1 != 0)
            char j
            
            do
                j = *eax_1
                eax_1 = &eax_1[1]
            while (j != 0)
            ecx = ecx + eax_1 - &eax_1[1] + 1
        
        edi_2 = &edi_2[0x12]
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t* var_24 = &var_8
int32_t ebx_3 = arg2 * 0x48
void* var_28 = ebx_3 + ecx
int32_t result = sub_458de2()

if (result s>= 0)
    int32_t* eax_4 = var_8
    int32_t eax_5 = (*(*eax_4 + 0xc))(eax_4)
    int32_t esi_2
    int32_t edi_4
    edi_4, esi_2 = __builtin_memcpy(eax_5, arg1, ebx_3 u>> 2 << 2)
    __builtin_memcpy(edi_4, esi_2, ebx_3 & 3)
    void** esi_3 = arg2
    void* var_c_1 = ebx_3
    
    if (esi_3 u> 0)
        void* edx = &arg1[0x11]
        arg2 = eax_5 - arg1
        arg1 = esi_3
        void** i_1
        
        do
            if (*edx != 0)
                void* edi_5 = var_c_1 + eax_5
                *(arg2 + edx) = edi_5
                char* esi_4 = *edx
                char* ecx_9 = esi_4
                void* eax_10 = &ecx_9[1]
                
                do
                    ebx_3.b = *ecx_9
                    ecx_9 = &ecx_9[1]
                while (ebx_3.b != 0)
                
                int32_t esi_5
                int32_t edi_6
                edi_6, esi_5 = __builtin_memcpy(edi_5, esi_4, (ecx_9 - eax_10 + 1) u>> 2 << 2)
                var_c_1 += ecx_9 - eax_10 + 1
                __builtin_memcpy(edi_6, esi_5, (ecx_9 - eax_10 + 1) & 3)
            
            edx += 0x48
            i_1 = arg1
            arg1 -= 1
        while (i_1 != 1)
    
    int32_t* eax_12 = var_8
    var_8 = nullptr
    *arg3 = eax_12

int32_t* eax_13 = var_8

if (eax_13 != 0)
    (*(*eax_13 + 8))(eax_13)

return result
