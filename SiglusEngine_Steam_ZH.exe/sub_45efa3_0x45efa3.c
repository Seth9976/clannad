// 函数: sub_45efa3
// 地址: 0x45efa3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* i_4 = arg2
void* eax = nullptr
int32_t edi
int32_t var_30 = edi
int32_t* var_c = nullptr

if (i_4 u> 0)
    void* edi_2 = &arg1[1]
    void* i_3 = i_4
    void* i
    
    do
        char* ecx_1 = *(edi_2 - 4)
        int32_t edx
        
        if (ecx_1 != 0)
            do
                edx.b = *ecx_1
                ecx_1 = &ecx_1[1]
            while (edx.b != 0)
            
            eax = eax + ecx_1 - &ecx_1[1] + 1
        
        int32_t j_3 = *edi_2
        eax += j_3 << 4
        
        if (j_3 u> 0)
            char** esi_2 = *(edi_2 + 4)
            int32_t j_2 = j_3
            int32_t j
            
            do
                char* ecx_3 = *esi_2
                
                if (ecx_3 != 0)
                    do
                        edx.b = *ecx_3
                        ecx_3 = &ecx_3[1]
                    while (edx.b != 0)
                    
                    eax = eax + ecx_3 - &ecx_3[1] + 1
                
                eax += esi_2[2]
                esi_2 = &esi_2[4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            i_4 = arg2
        
        edi_2 += 0xc
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t ebx_2 = i_4 * 0xc
int32_t* var_34 = &var_c
void* var_38 = eax + ebx_2
int32_t result = sub_458de2()

if (result s>= 0)
    int32_t* eax_2 = var_c
    int32_t* eax_3 = (*(*eax_2 + 0xc))(eax_2)
    int32_t eax_4 = ebx_2
    int32_t esi_4
    int32_t edi_4
    edi_4, esi_4 = __builtin_memcpy(eax_3, arg1, ebx_2 u>> 2 << 2)
    __builtin_memcpy(edi_4, esi_4, eax_4 & 3)
    
    if (arg2 u> 0)
        int32_t* var_14_1 = eax_3
        void* esi_6 = eax_3 - arg1
        int32_t* edx_2 = &arg1[1]
        void* i_2 = arg2
        void* i_1
        
        do
            if (edx_2[-1] != 0)
                void* edi_6 = eax_4 + eax_3
                *var_14_1 = edi_6
                char* ebx_3 = edx_2[-1]
                char* esi_7 = ebx_3
                void* ecx_14
                
                do
                    ecx_14.b = *esi_7
                    esi_7 = &esi_7[1]
                while (ecx_14.b != 0)
                void* ecx_15 = esi_7 - &esi_7[1] + 1
                arg2 = ecx_15
                int32_t esi_10
                int32_t edi_7
                edi_7, esi_10 = __builtin_memcpy(edi_6, ebx_3, ecx_15 u>> 2 << 2)
                __builtin_memcpy(edi_7, esi_10, ecx_15 & 3)
                eax_4 += ecx_15
            
            if (*edx_2 u> 0)
                void* edi_8 = eax_4 + eax_3
                *(edx_2 + esi_6 + 4) = edi_8
                int32_t ecx_22 = *edx_2 << 4
                int32_t esi_12
                int32_t edi_9
                edi_9, esi_12 = __builtin_memcpy(edi_8, edx_2[1], ecx_22 u>> 2 << 2)
                __builtin_memcpy(edi_9, esi_12, ecx_22 & 3)
                int32_t ecx_26 = *edx_2
                eax_4 += ecx_26 << 4
                int32_t* esi_15 = nullptr
                int32_t j_1 = 0
                
                if (ecx_26 u> 0)
                    arg1 = nullptr
                    
                    do
                        void* ecx_28 = *(edx_2 + esi_6 + 4)
                        
                        if (*(esi_15 + edx_2[1]) != 0)
                            void* ebx_6 = eax_4 + eax_3
                            *(esi_15 + ecx_28) = ebx_6
                            char* esi_16 = *(esi_15 + edx_2[1])
                            char* edi_12 = esi_16
                            void* ecx_30
                            
                            do
                                ecx_30.b = *edi_12
                                edi_12 = &edi_12[1]
                            while (ecx_30.b != 0)
                            void* ecx_31 = edi_12 - &edi_12[1] + 1
                            arg2 = ecx_31
                            int32_t esi_17
                            int32_t edi_15
                            edi_15, esi_17 = __builtin_memcpy(ebx_6, esi_16, ecx_31 u>> 2 << 2)
                            __builtin_memcpy(edi_15, esi_17, ecx_31 & 3)
                            esi_15 = arg1
                            eax_4 += ecx_31
                        
                        void* ecx_35 = ecx_28 + esi_15
                        void* edi_17 = eax_3 + eax_4
                        *(ecx_35 + 0xc) = edi_17
                        int32_t ecx_36 = *(ecx_35 + 8)
                        int32_t esi_19
                        int32_t edi_18
                        edi_18, esi_19 =
                            __builtin_memcpy(edi_17, *(esi_15 + edx_2[1] + 0xc), ecx_36 u>> 2 << 2)
                        __builtin_memcpy(edi_18, esi_19, ecx_36 & 3)
                        eax_4 += *(ecx_35 + 8)
                        j_1 += 1
                        esi_15 = &arg1[4]
                        arg1 = esi_15
                    while (j_1 u< *edx_2)
            
            var_14_1 = &var_14_1[3]
            edx_2 = &edx_2[3]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    int32_t* eax_5 = var_c
    var_c = nullptr
    *arg3 = eax_5

int32_t* eax_6 = var_c

if (eax_6 != 0)
    (*(*eax_6 + 8))(eax_6)

return result
