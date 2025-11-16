// 函数: sub_100086f6
// 地址: 0x100086f6
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x10016068
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004350
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x10016068 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_5 = &data_10008702
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result = 0xffffffff
uint32_t* eax = __getptd()
sub_10008650()
void* esi = eax[0x1a]
uint32_t eax_1 = sub_100083f1(arg1)

if (eax_1 == *(esi + 4))
    result = 0
else
    int32_t* eax_2 = sub_1000425a(0x220)
    
    if (eax_2 != 0)
        __builtin_memcpy(eax_2, eax[0x1a], 0x220)
        void* esi_2 = nullptr
        *eax_2 = 0
        result = __setmbcp_nolock(eax_1, eax_2)
        arg1 = result
        
        if (result == 0)
            uint32_t* eax_5 = eax
            int32_t* ecx_3 = eax_5[0x1a]
            bool cond:0_1 = *ecx_3 != 1
            *ecx_3
            *ecx_3 -= 1
            
            if (not(cond:0_1))
                int32_t ecx_4 = eax_5[0x1a]
                
                if (ecx_4 != &data_100178c8)
                    _free(ecx_4)
                    eax_5 = eax
            
            eax_5[0x1a] = eax_2
            *eax_2 += 1
            
            if ((eax[0x1c].b & 2) == 0 && (data_10017e08.b & 1) == 0)
                __lock(0xd)
                int32_t var_8_1 = 0
                data_1001b450 = eax_2[1]
                data_1001b454 = eax_2[2]
                data_1001b464 = eax_2[0x87]
                int32_t ecx_6 = 0
                int32_t eax_9
                
                while (true)
                    int32_t var_20_1 = ecx_6
                    
                    if (ecx_6 s>= 5)
                        break
                    
                    eax_9.w = *(eax_2 + (ecx_6 << 1) + 0xc)
                    *((ecx_6 << 1) + &data_1001b458) = eax_9.w
                    ecx_6 += 1
                
                void* ecx_7 = nullptr
                
                while (true)
                    void* var_20_2 = ecx_7
                    
                    if (ecx_7 s>= 0x101)
                        break
                    
                    eax_9.b = *(ecx_7 + eax_2 + 0x18)
                    *(ecx_7 + 0x100176c0) = eax_9.b
                    ecx_7 += 1
                
                while (true)
                    void* var_20_3 = esi_2
                    
                    if (esi_2 s>= 0x100)
                        break
                    
                    eax_9.b = *(esi_2 + eax_2 + 0x119)
                    *(esi_2 + 0x100177c8) = eax_9.b
                    esi_2 += 1
                
                void* eax_10 = data_10017aec
                bool cond:1_1 = *eax_10 != 1
                *eax_10
                *eax_10 -= 1
                
                if (not(cond:1_1))
                    void* eax_11 = data_10017aec
                    
                    if (eax_11 != &data_100178c8)
                        _free(eax_11)
                
                data_10017aec = eax_2
                *eax_2
                *eax_2 += 1
                int32_t var_8_2 = 0xfffffffe
                sub_10008868()
        else if (result == 0xffffffff)
            if (eax_2 != &data_100178c8)
                _free(eax_2)
            
            *__errno() = 0x16

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_1000889d
return result
