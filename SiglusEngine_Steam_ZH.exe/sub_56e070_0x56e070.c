// 函数: sub_56e070
// 地址: 0x56e070
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b3b10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_74
int32_t eax_2 = __security_cookie ^ &var_74
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg1
int32_t result_1 = result

if (*(result + 4) != 0)
    int32_t* ebx_1 = data_bac474
    void* edi_1 = *ebx_1
    void* ecx = ebx_1[1]
    int16_t var_64
    int32_t var_50
    
    if (edi_1 != ecx)
        var_50 = 7
        int32_t var_54_1 = 0
        var_64 = 0
        int32_t var_c_1 = 0
        ecx -= edi_1
        int32_t i = 0
        
        if (ecx s/ 0x4c s> 0)
            do
                int32_t eax_10 = *(data_bac4e0 + 0x34)
                
                if (eax_10 != 0)
                    eax_10(*(result_1 + 0x150), i, 1, edi_1, eax_4)
                
                var_74 = 0
                int32_t var_88_3 = sub_67e860(*(edi_1 + 0x18), &var_74)
                int16_t var_4c
                int16_t* eax_11 = sub_6ad9b0(&var_4c)
                var_c_1.b = 1
                int32_t ecx_5 = *(data_bac4e0 + 0x34)
                
                if (ecx_5 != 0)
                    ecx_5(*(result_1 + 0x150), i, 2, eax_11, eax_4)
                
                var_c_1.b = 0
                int32_t var_38
                
                if (var_38 u>= 8)
                    j__free(var_4c.d)
                
                ecx = ebx_1[1] - *ebx_1
                i += 1
                var_4c = 0
                edi_1 += 0x4c
                var_38 = 7
                int32_t var_3c_1 = 0
            while (i s< ecx s/ 0x4c)
        
        int32_t var_c_2 = 0xffffffff
    
    result = ebx_1[7]
    
    if (result != ebx_1[8])
        int32_t var_20_1 = 7
        int32_t var_24_1 = 0
        int16_t var_34_1 = 0
        int32_t var_c_3 = 2
        int32_t edi_2 = 0
        result = ebx_1[8] - ebx_1[7]
        
        if ((result & 0xfffffffc) s> 0)
            do
                int32_t eax_18 = ebx_1[7]
                var_74 = 0
                int32_t esi_1 = *(*(eax_18 + (edi_2 << 2)) + 0x18)
                void* eax_20 = data_bac474
                
                if (*(eax_20 + 0x18) != 0)
                    void** eax_21 = *(eax_20 + 0x14)
                    void** edx_6 = eax_21
                    void** ecx_7 = eax_21[1]
                    
                    while (*(ecx_7 + 0xd) == 0)
                        if (ecx_7[4] s>= esi_1)
                            edx_6 = ecx_7
                            ecx_7 = *ecx_7
                        else
                            ecx_7 = ecx_7[2]
                    
                    void*** eax_22
                    
                    if (edx_6 == eax_21 || esi_1 s< edx_6[4])
                        void** var_6c = eax_21
                        eax_22 = &var_6c
                    else
                        void** var_68 = edx_6
                        eax_22 = &var_68
                    
                    ecx = data_bac474
                    void** eax_23 = *eax_22
                    
                    if (eax_23 != *(ecx + 0x14))
                        void* eax_24 = eax_23[5]
                        
                        if (eax_24 != 0)
                            void* var_88_6 = ecx
                            int32_t* eax_25
                            eax_25, ecx = sub_55b0d0(ecx + 0x3c, *(eax_24 + 0x18))
                            
                            if (eax_25 == 0)
                                var_74 = 0
                            else
                                var_74 = *eax_25
                
                void* var_88_7 = ecx
                int16_t* eax_27 = sub_6ad9b0(&var_64)
                var_c_3.b = 3
                ecx = *(data_bac4e0 + 0x34)
                
                if (ecx != 0)
                    ecx = ecx(*(result_1 + 0x484), edi_2, 2, eax_27, eax_4)
                
                var_c_3.b = 2
                
                if (var_50 u>= 8)
                    ecx = j__free(var_64.d)
                
                var_50 = 7
                var_64 = 0
                edi_2 += 1
                result = (ebx_1[8] - ebx_1[7]) s>> 2
                int32_t var_54_2 = 0
            while (edi_2 s< result)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_74)
return result
