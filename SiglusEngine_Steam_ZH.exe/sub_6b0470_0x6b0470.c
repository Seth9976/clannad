// 函数: sub_6b0470
// 地址: 0x6b0470
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ecx = 0x41
void var_10e
void* eax_5 = &var_10e
int32_t temp1_1

do
    temp1_1 = ecx
    ecx -= 1
    *(eax_5 - 2) = 0
    eax_5 += 4
while (temp1_1 - 1 s>= 0)
void var_110
int32_t ecx_2
int32_t edi_1
edi_1, ecx_2 = __memfill_u32(&var_110, 
    (((((zx.d(arg11) << 8) + zx.d(arg10)) << 8) + zx.d(arg9:1.b)) << 8) + zx.d(arg9.b), 0x42)
void var_10d
void* ecx_3 = &var_10d
int32_t esi = 0
int32_t i_2 = 0x42
int32_t i

do
    ecx_3 += 4
    int32_t eax_14
    int32_t edx_7
    edx_7:eax_14 = muls.dp.d(0x7e07e07f, esi)
    esi += zx.d(arg11)
    int32_t edx_8 = edx_7 s>> 5
    *(ecx_3 - 4) = (edx_8 u>> 0x1f).b + edx_8.b
    i = i_2
    i_2 -= 1
while (i != 1)
int32_t ecx_4 = arg7
void* result = &var_110

if (ecx_4 s< arg2)
    int32_t esi_1 = arg8
    
    if (esi_1 s< arg3)
        void* edx_9 = arg5
        int32_t var_114_1
        
        if (ecx_4 s>= 0)
            var_114_1 = 0
        else
            edx_9 += ecx_4
            int32_t eax_19 = neg.d(ecx_4)
            ecx_4 = 0
            var_114_1 = eax_19
        
        result = arg2 - ecx_4
        
        if (result s< edx_9)
            edx_9 = result
        
        if (edx_9 s> 0)
            int32_t var_118_1
            
            if (esi_1 s>= 0)
                result = arg6
                var_118_1 = 0
            else
                var_118_1 = neg.d(esi_1)
                result = arg6 + esi_1
                esi_1 = 0
            
            void* result_1 = arg3 - esi_1
            
            if (result_1 s< result)
                result = result_1
            
            if (result s> 0)
                void** edi_5 = arg1 + ((arg2 * esi_1 + ecx_4) << 2)
                char* esi_2 = arg4 + arg5 * var_118_1 + var_114_1
                void* i_1 = result
                
                do
                    void* j = edx_9
                    
                    do
                        int32_t eax_32
                        eax_32.b = *esi_2
                        esi_2 = &esi_2[1]
                        result = *(&var_110 + (eax_32 << 2))
                        *edi_5 = result
                        edi_5 = &edi_5[1]
                        j -= 1
                    while (j != 0)
                    
                    edi_5 = &edi_5[arg2 - edx_9]
                    esi_2 += arg5 - edx_9
                    i_1 -= 1
                while (i_1 != 0)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
