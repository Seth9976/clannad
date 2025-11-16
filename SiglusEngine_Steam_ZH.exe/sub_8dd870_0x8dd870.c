// 函数: sub_8dd870
// 地址: 0x8dd870
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_54
char* edi = var_54
int32_t var_40
int32_t edx = var_40
int32_t var_28
int32_t i_1 = var_28 + 1
int32_t i

do
    i = i_1
    int32_t temp0_1 = edx
    int32_t var_48
    edx += var_48
    
    if (temp0_1 + var_48 s>= 0)
        int32_t var_44
        int32_t temp3_1
        
        do
            int32_t var_a0
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return 
                
                void* var_98
                int32_t eax_1
                eax_1.b = *(var_98 + var_a0)
                int32_t var_b4
                
                if (var_b4 != 0)
                    eax_1.b = not.b(eax_1.b)
                
                char var_b0
                int32_t var_ac
                int32_t eax_3 = (eax_1 << var_b0) + var_ac
                
                if (eax_3 s< 0)
                    eax_3 = 0
                else if (eax_3 s> 0xff)
                    eax_3 = 0xff
                
                if (eax_3 != 0)
                    int32_t var_11c
                    int32_t ebx_9 = *(*((eax_3 << 2) + &data_4e3da80) + var_11c)
                    
                    if (ebx_9 != 0)
                        int32_t edx_2 = *((ebx_9 << 2) + &data_4e3da80)
                        char* var_3c
                        int32_t ebx_13
                        ebx_13.b = var_3c[2]
                        int32_t eax_4
                        eax_4.b = edi[2]
                        int32_t eax_5 = eax_4 - *((neg.d(ebx_13 - 0xff) << 2) + edx_2)
                        
                        if (eax_5 s< 0)
                            eax_5 = 0
                        
                        edi[2] = eax_5.b
                        int32_t ebx_19
                        ebx_19.b = var_3c[1]
                        int32_t eax_6
                        eax_6.b = edi[1]
                        int32_t eax_7 = eax_6 - *((neg.d(ebx_19 - 0xff) << 2) + edx_2)
                        
                        if (eax_7 s< 0)
                            eax_7 = 0
                        
                        edi[1] = eax_7.b
                        int32_t ebx_25
                        ebx_25.b = *var_3c
                        int32_t eax_8
                        eax_8.b = *edi
                        int32_t eax_9 = eax_8 - *((neg.d(ebx_25 - 0xff) << 2) + edx_2)
                        
                        if (eax_9 s< 0)
                            eax_9 = 0
                        
                        *edi = eax_9.b
            
            int32_t eax = var_a0 + 1
            int32_t var_bc
            
            if (eax s>= var_bc)
                eax = 0
            
            var_a0 = eax
            edi = &edi[4]
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i_1 = i - 1
while (i != 1)
