// 函数: sub_734200
// 地址: 0x734200
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi = arg2
void* edx = arg3
int32_t var_22c = esi
void* var_230 = edx
void var_208
int32_t ecx
int32_t edi
edi, ecx = __memfill_u32(&var_208, 0x7fffffff, 0x80)
void* result = nullptr
void* result_1 = nullptr

if (arg6 s> 0)
    do
        int32_t* edx_1 = *(edx + 0x74)
        int32_t var_214_1 = 3
        uint32_t ebx_1 = zx.d(*(result + arg7))
        int32_t esi_2 = (esi - zx.d(*(ebx_1 + *edx_1))) * 2
        int32_t ecx_4 = (arg4 - zx.d(*(edx_1[1] + ebx_1))) * 3
        int32_t edx_3 = arg5 - zx.d(*(edx_1[2] + ebx_1))
        void* ecx_6 = &var_208
        int32_t var_20c_1 = edx_3 * edx_3 + ecx_4 * ecx_4 + esi_2 * esi_2
        char* edi_5 = arg8
        int32_t eax_17 = var_20c_1
        int32_t var_220_1 = (esi_2 + 8) << 5
        int32_t temp2_1
        
        do
            int32_t edx_4 = eax_17
            int32_t var_224_1 = 7
            int32_t var_21c_1 = edx_4
            int32_t var_218_1 = (ecx_4 + 6) * 0x18
            int32_t temp1_1
            
            do
                int32_t eax_19 = edx_4
                int32_t esi_5 = 3
                int32_t edx_5 = (edx_3 + 4) << 4
                int32_t temp0_1
                
                do
                    if (eax_19 s< *ecx_6)
                        *ecx_6 = eax_19
                        *edi_5 = ebx_1.b
                    
                    eax_19 += edx_5
                    ecx_6 += 4
                    edx_5 -= 0xffffff80
                    edi_5 = &edi_5[1]
                    temp0_1 = esi_5
                    esi_5 -= 1
                while (temp0_1 - 1 s>= 0)
                edx_4 = var_21c_1 + var_218_1
                temp1_1 = var_224_1
                var_224_1 -= 1
                var_21c_1 = edx_4
                var_218_1 += 0x120
            while (temp1_1 - 1 s>= 0)
            eax_17 = var_20c_1 + var_220_1
            var_20c_1 = eax_17
            temp2_1 = var_214_1
            var_214_1 -= 1
            var_220_1 += 0x200
        while (temp2_1 - 1 s>= 0)
        esi = var_22c
        result = result_1 + 1
        edx = var_230
        result_1 = result
    while (result s< arg6)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
