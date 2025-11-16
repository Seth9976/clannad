// 函数: __alloc_osfhnd
// 地址: 0x75e7de
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 0x18
int32_t var_8 = 0xb49270
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0xb49270 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_3c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_3c
void* const var_40_3 = &data_75e7ea
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xffffffff
int32_t var_20 = 0xffffffff
int32_t var_28 = 0
int32_t result

if (__mtinitlocknum(0xb) != 0)
    __lock(0xb)
    int32_t var_8_1 = 0
    int32_t ebx_1 = 0
    
    while (true)
        int32_t var_2c_1 = ebx_1
        
        if (ebx_1 s>= 0x40)
            break
        
        int32_t* edi_1 = (&data_b95720)[ebx_1]
        
        if (edi_1 == 0)
            int32_t* i = sub_74cccf(0x20, 0x40)
            int32_t* i_1 = i
            
            if (i != 0)
                (&data_b95720)[ebx_1] = i
                data_4ecd224 += 0x20
                
                while (i u< (&data_b95720)[ebx_1] + 0x800)
                    i[1].w = 0xa00
                    *i = 0xffffffff
                    i[2] = 0
                    i = &i[0x10]
                    int32_t* i_2 = i
                
                result_1 = ebx_1 << 5
                int32_t result_3 = result_1
                *((&data_b95720)[result_1 s>> 5] + ((result_1 & 0x1f) << 6) + 4) = 1
                ___lock_fhandle(result_1)
            
            break
        
        while (true)
            int32_t* var_24_1 = edi_1
            
            if (edi_1 u>= (&data_b95720)[ebx_1] + 0x800)
                break
            
            if ((edi_1[1].b & 1) == 0)
                if (edi_1[2] == 0)
                    __lock(0xa)
                    int32_t var_8_2 = 1
                    
                    if (edi_1[2] == 0)
                        sub_74d1a6(&edi_1[3], 0xfa0, 0)
                        edi_1[2] += 1
                    
                    int32_t var_8_3 = 0
                    sub_75e8b6()
                
                if (var_28 == 0)
                    EnterCriticalSection(&edi_1[3])
                    
                    if ((edi_1[1].b & 1) != 0)
                        LeaveCriticalSection(&edi_1[3])
                    else if (var_28 == 0)
                        edi_1[1].b = 1
                        *edi_1 = 0xffffffff
                        result_1 = ((edi_1 - (&data_b95720)[ebx_1]) s>> 6) + (ebx_1 << 5)
                        int32_t result_2 = result_1
                        break
            
            edi_1 = &edi_1[0x10]
        
        if (result_1 != 0xffffffff)
            break
        
        ebx_1 += 1
    
    int32_t var_8_4 = 0xfffffffe
    sub_75e97e()
    result = result_1
else
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_75e97a
return result
