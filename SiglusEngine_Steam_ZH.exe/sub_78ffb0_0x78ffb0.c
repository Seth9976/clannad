// 函数: sub_78ffb0
// 地址: 0x78ffb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg3, 0x144)
char* var_134
char* edi = var_134
char* var_124
char* esi_1 = var_124
int32_t var_140
int32_t ecx = var_140

while (true)
    int32_t var_144
    int32_t ecx_1 = var_144
    
    while (true)
        int32_t ebx
        ebx.b = esi_1[3]
        
        if (ebx != 0)
            int32_t edx_1 = *((ebx << 2) + &data_4e3da80)
            int32_t ebx_4
            ebx_4.b = esi_1[2]
            int32_t eax
            eax.b = edi[2]
            int32_t eax_1 = eax + *((ebx_4 << 2) + edx_1)
            
            if (eax_1 s> 0xff)
                eax_1 = 0xff
            
            edi[2] = eax_1.b
            int32_t ebx_8
            ebx_8.b = esi_1[1]
            int32_t eax_2
            eax_2.b = edi[1]
            int32_t eax_3 = eax_2 + *((ebx_8 << 2) + edx_1)
            
            if (eax_3 s> 0xff)
                eax_3 = 0xff
            
            edi[1] = eax_3.b
            int32_t ebx_12
            ebx_12.b = *esi_1
            *((ebx_12 << 2) + edx_1)
            int32_t __saved_ebp
            int32_t entry_ebx
            return sub_790053(0, edx_1, ecx_1, &__saved_ebp, esi_1, edi, arg2, arg1, entry_ebx)
                __tailcall
        
        esi_1 = &esi_1[4]
        edi = &edi[4]
        int32_t temp0_1 = ecx_1
        ecx_1 -= 1
        
        if (temp0_1 == 1)
            int32_t var_120
            esi_1 = &esi_1[var_120]
            int32_t var_130
            edi = &edi[var_130]
            int32_t temp1_1 = ecx
            ecx -= 1
            
            if (temp1_1 == 1)
                return 
            
            break
