// 函数: __ValidateEH3RN
// 地址: 0x766630
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xfffffffe
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_c_1 = 0xb49408 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_5c = __security_cookie_1 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = &var_5c
int32_t* lpAddress = *(arg1 + 8)
int32_t* lpAddress_2 = lpAddress
int32_t* lpAddress_1 = lpAddress

if ((lpAddress.b & 3) == 0)
    struct _TEB* Self = fsbase->NtTib.Self
    void* StackLimit = Self->NtTib.StackLimit
    
    if (lpAddress u< StackLimit || lpAddress u>= Self->NtTib.StackBase)
        int32_t edx_1 = *(arg1 + 0xc)
        
        if (edx_1 == 0xffffffff)
            fsbase->NtTib.ExceptionList = ExceptionList
            return 1
        
        int32_t var_24_1 = 0
        int32_t ecx_3 = 0
        int32_t* lpAddress_3 = lpAddress
        int32_t esi_2
        
        do
            int32_t esi_1 = *lpAddress_3
            
            if (esi_1 != 0xffffffff && esi_1 u>= ecx_3)
                goto label_766679
            
            if (lpAddress_3[1] == 0)
                esi_2 = var_24_1
            else
                esi_2 = 1
                var_24_1 = 1
            
            ecx_3 += 1
            lpAddress_3 = &lpAddress_3[3]
        while (ecx_3 u<= edx_1)
        
        if (esi_2 == 0)
        label_7666ef:
            void* i = lpAddress & 0xfffff000
            void* i_3 = i
            int32_t esi_3 = 0
            int32_t eax_4
            int16_t* ebx
            int32_t esi_4
            
            while (true)
                if (esi_3 s>= data_b9c2c8)
                    esi_4 = edx_1
                    goto label_766851
                
                eax_4 = *((esi_3 << 3) + &data_b9c248)
                ebx = *((esi_3 << 3) + &data_b9c24c)
                
                if (eax_4 == i)
                    break
                
                esi_3 += 1
                lpAddress = lpAddress_2
            
            int32_t var_8_1 = 0
            
            if (__ValidateImageBase(ebx) != 0
                    && _ValidateScopeTableHandlers(ebx, lpAddress_2, edx_1) != 0
                    && __FindPESection(ebx, *(arg1 + 4) - ebx) != 0)
                int32_t var_8_2 = 0xfffffffe
                
                if (esi_3 s> 0)
                    int32_t temp0_1 = data_b9c2cc
                    data_b9c2cc = 1
                    
                    if (temp0_1 == 0)
                        int32_t edi_2
                        bool cond:1_1
                        
                        if (*((esi_3 << 3) + &data_b9c248) == i)
                            edi_2 = eax_4
                            cond:1_1 = esi_3 s<= 0
                        else
                            int32_t eax_12 = data_b9c2c8
                            esi_3 = eax_12 - 1
                            
                            if (esi_3 s< 0)
                            label_7667ae:
                                edi_2 = eax_4
                            else
                                while (*((esi_3 << 3) + &data_b9c248) != i)
                                    int32_t temp2_1 = esi_3
                                    esi_3 -= 1
                                    
                                    if (temp2_1 - 1 s< 0)
                                        goto label_7667ae
                                
                                edi_2 = *((esi_3 << 3) + &data_b9c248)
                                ebx = *((esi_3 << 3) + &data_b9c24c)
                            
                            cond:1_1 = esi_3 s<= 0
                            
                            if (esi_3 s< 0)
                                if (eax_12 s< 0x10)
                                    eax_12 += 1
                                    data_b9c2c8 = eax_12
                                
                                esi_3 = eax_12 - 1
                                cond:1_1 = esi_3 s<= 0
                        
                        if (not(cond:1_1) && esi_3 s>= 0)
                            void* edx_2 = &data_b9c248
                            int32_t i_6 = esi_3 + 1
                            int32_t i_1
                            
                            do
                                int32_t eax_13 = *edx_2
                                int16_t* ecx_5 = *(edx_2 + 4)
                                *edx_2 = edi_2
                                *(edx_2 + 4) = ebx
                                edi_2 = eax_13
                                ebx = ecx_5
                                edx_2 += 8
                                i_1 = i_6
                                i_6 -= 1
                            while (i_1 != 1)
                        
                        data_b9c2cc
                        data_b9c2cc = 0
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return 1
            
            int32_t var_8_3 = 0xfffffffe
            lpAddress = lpAddress_2
            esi_4 = edx_1
        label_766851:
            MEMORY_BASIC_INFORMATION buffer
            
            if (VirtualQuery(lpAddress, &buffer, 0x1c) == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 1
            
            if (buffer.Type != &data_1000000)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0xffffffff
            
            void* AllocationBase = buffer.AllocationBase
            
            if (__ValidateImageBase(AllocationBase) == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0xffffffff
            
            if ((buffer.Protect.b & 0xcc) == 0)
            label_7668c2:
                
                if (_ValidateScopeTableHandlers(AllocationBase, lpAddress, esi_4) != 0
                        && __FindPESection(AllocationBase, *(arg1 + 4) - AllocationBase) != 0)
                    int32_t temp0_3 = data_b9c2cc
                    data_b9c2cc = 1
                    
                    if (temp0_3 == 0)
                        int32_t edx_3 = data_b9c2c8
                        int32_t ecx_9 = edx_3
                        
                        if (edx_3 s> 0)
                            int32_t* eax_27 = (edx_3 << 3) + &data_b9c240
                            
                            while (*eax_27 != i)
                                ecx_9 -= 1
                                eax_27 -= 8
                                
                                if (ecx_9 s<= 0)
                                    break
                        
                        if (ecx_9 != 0)
                            *((ecx_9 << 3) + &data_b9c244) = buffer.AllocationBase
                        else
                            int32_t eax_28 = ecx_9 + 0xf
                            
                            if (edx_3 s<= 0xf)
                                eax_28 = edx_3
                            
                            if (eax_28 s>= 0)
                                void** ebx_2 = &data_b9c248
                                int32_t i_5 = eax_28 + 1
                                void* AllocationBase_1 = buffer.AllocationBase
                                int32_t i_2
                                
                                do
                                    void* i_4 = *ebx_2
                                    void* AllocationBase_2 = ebx_2[1]
                                    *ebx_2 = i
                                    ebx_2[1] = AllocationBase_1
                                    i = i_4
                                    AllocationBase_1 = AllocationBase_2
                                    ebx_2 = &ebx_2[2]
                                    i_2 = i_5
                                    i_5 -= 1
                                while (i_2 != 1)
                                edx_3 = data_b9c2c8
                            
                            if (edx_3 s< 0x10)
                                data_b9c2c8 = edx_3 + 1
                        
                        data_b9c2cc
                        data_b9c2cc = 0
                    
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 1
            else
                void* eax_20 = __FindPESection(AllocationBase, lpAddress - AllocationBase)
                
                if (eax_20 != 0 && (*(eax_20 + 0x24) & 0x80000000) == 0)
                    goto label_7668c2
        else
            int32_t eax_3 = *(arg1 - 8)
            
            if (eax_3 u>= StackLimit && eax_3 u< arg1)
                goto label_7666ef

label_766679:
fsbase->NtTib.ExceptionList = ExceptionList
return 0
