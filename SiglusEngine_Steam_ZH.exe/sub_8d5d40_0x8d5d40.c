// 函数: sub_8d5d40
// 地址: 0x8d5d40
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
    int32_t temp0_1 = edx
    int32_t var_48
    edx += var_48
    
    if (temp0_1 + var_48 s>= 0)
        int32_t var_44
        int32_t temp3_1
        
        do
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return 
                
                char* var_3c
                int32_t ebx_1
                ebx_1.b = var_3c[2]
                int32_t eax_1
                eax_1.b = edi[2]
                int32_t eax_2 = eax_1 - neg.d(ebx_1 - 0xff)
                
                if (eax_2 s< 0)
                    eax_2 = 0
                
                edi[2] = eax_2.b
                int32_t ebx_4
                ebx_4.b = var_3c[1]
                int32_t eax_3
                eax_3.b = edi[1]
                int32_t eax_4 = eax_3 - neg.d(ebx_4 - 0xff)
                
                if (eax_4 s< 0)
                    eax_4 = 0
                
                edi[1] = eax_4.b
                int32_t ebx_7
                ebx_7.b = *var_3c
                int32_t eax_5
                eax_5.b = *edi
                int32_t eax = eax_5 - neg.d(ebx_7 - 0xff)
                
                if (eax s< 0)
                    eax = 0
                
                *edi = eax.b
            
            edi = &edi[4]
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
