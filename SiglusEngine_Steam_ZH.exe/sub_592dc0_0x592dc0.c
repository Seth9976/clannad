// 函数: sub_592dc0
// 地址: 0x592dc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b8142
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_8c
int32_t eax_2 = __security_cookie ^ &var_8c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_8c = arg1
int32_t ebx = 0
int32_t var_88 = 0
int32_t* edx = data_bac438
int32_t result = *edx

if (result != edx[1])
    int32_t esi_1 = 0
    result = (edx[1] - *edx) s>> 6
    int32_t result_1 = result
    
    if (result s> 0)
        char* edi_1 = nullptr
        void* ecx = arg1
        
        do
            int32_t eax_11 = *(data_bac4e0 + 0x18)
            
            if (eax_11 != 0)
                eax_11(*(ecx + 0xe4), 0, *edx + 4 + edi_1, eax_4)
                edx = data_bac438
            
            void* eax_12 = *edx
            int16_t var_7c
            int32_t var_68
            int16_t var_64
            int32_t var_50
            int16_t* ecx_2
            
            if (*(edi_1 + eax_12) == 0)
                var_50 = 7
                int32_t var_54_1 = 0
                var_64 = 0
                sub_52e720(&var_64, 0xaefdb8, 6)
                ecx_2 = &var_64
                int32_t var_c_2 = 1
                ebx |= 2
            else
                var_68 = 7
                var_7c = 0
                int32_t var_6c_1 = 0
                sub_52e3c0(&var_7c, eax_12 + 0x1c + edi_1, 0, 0xffffffff)
                ecx_2 = &var_7c
                int32_t var_c_1 = 0
                ebx |= 1
            
            int32_t var_88_1 = ebx
            int32_t eax_16 = *(data_bac4e0 + 0x34)
            
            if (eax_16 != 0)
                eax_16(*(var_8c + 0xe4), esi_1, 1, ecx_2, eax_4)
            
            if ((ebx.b & 2) != 0)
                ebx &= 0xfffffffd
                int32_t var_88_2 = ebx
                
                if (var_50 u>= 8)
                    j__free(var_64.d)
                
                var_50 = 7
                int32_t var_54_2 = 0
                var_64 = 0
            
            int32_t var_c_3 = 0xffffffff
            
            if ((ebx.b & 1) != 0)
                ebx &= 0xfffffffe
                int32_t var_88_3 = ebx
                
                if (var_68 u>= 8)
                    j__free(var_7c.d)
                
                var_68 = 7
                int32_t var_6c_2 = 0
                var_7c = 0
            
            void* const edx_1 = &data_aefdc8
            int32_t var_38_1 = 7
            
            if (edi_1[*data_bac438 + 1] == 0)
                edx_1 = &data_aefdcc
            
            int32_t var_3c_1 = 0
            int16_t var_4c = 0
            int32_t ecx_5
            
            if (*edx_1 != 0)
                void* const ecx_6 = edx_1
                void* var_84_2 = ecx_6 + 2
                void* eax_19
                
                do
                    eax_19.w = *ecx_6
                    ecx_6 += 2
                while (eax_19.w != 0)
                ecx_5 = (ecx_6 - var_84_2) s>> 1
            else
                ecx_5 = nullptr
            
            int32_t ecx_9 = sub_52e720(&var_4c, edx_1, ecx_5)
            int32_t var_c_4 = 2
            int32_t eax_21 = *(data_bac4e0 + 0x34)
            
            if (eax_21 != 0)
                ecx_9 = eax_21(*(var_8c + 0xe4), esi_1, 2, &var_4c, eax_4)
            
            int32_t var_c_5 = 0xffffffff
            
            if (var_38_1 u>= 8)
                ecx_9 = j__free(var_4c.d)
            
            edx = data_bac438
            int32_t var_38_2 = 7
            int32_t var_3c_2 = 0
            var_4c = 0
            result = *edx
            
            if (edi_1[result] != 0)
                *(edi_1 + result + 0x34)
                int32_t var_a0_8 = ecx_9
                int16_t* eax_22 = sub_6ad9b0(&var_7c)
                int32_t var_c_6 = 3
                int32_t ecx_13 = *(data_bac4e0 + 0x34)
                
                if (ecx_13 != 0)
                    ecx_13 = ecx_13(*(var_8c + 0xe4), esi_1, 3, eax_22, eax_4)
                
                int32_t var_c_7 = 0xffffffff
                
                if (var_68 u>= 8)
                    ecx_13 = j__free(var_7c.d)
                
                var_68 = 7
                var_7c = 0
                int32_t var_6c_3 = 0
                int32_t var_a0_11 = ecx_13
                *(*data_bac438 + edi_1 + 0x38)
                int16_t* eax_25 = sub_6ad9b0(&var_64)
                int32_t var_c_8 = 4
                int32_t ecx_16 = *(data_bac4e0 + 0x34)
                
                if (ecx_16 != 0)
                    ecx_16 = ecx_16(*(var_8c + 0xe4), esi_1, 4, eax_25, eax_4)
                
                int32_t var_c_9 = 0xffffffff
                
                if (var_50 u>= 8)
                    ecx_16 = j__free(var_64.d)
                
                var_50 = 7
                var_64 = 0
                int32_t var_54_3 = 0
                int32_t var_a0_14 = ecx_16
                *(*data_bac438 + edi_1 + 0x3c)
                int16_t var_34
                int16_t* eax_28 = sub_6ad9b0(&var_34)
                int32_t var_c_10 = 5
                int32_t ecx_19 = *(data_bac4e0 + 0x34)
                
                if (ecx_19 != 0)
                    ecx_19(*(var_8c + 0xe4), esi_1, 5, eax_28, eax_4)
                
                int32_t var_c_11 = 0xffffffff
                int32_t var_20
                
                if (var_20 u>= 8)
                    j__free(var_34.d)
                
                edx = data_bac438
                result = 0
                var_20 = 7
                int32_t var_24_1 = 0
                var_34 = 0
            
            ecx = var_8c
            esi_1 += 1
            edi_1 = &edi_1[0x40]
        while (esi_1 s< result_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_8c)
return result
