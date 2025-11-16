// 函数: __alloc_osfhnd
// 地址: 0x5f9651
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 0x18
int32_t var_8 = 0x62a9c0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5f4b00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x62a9c0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_3c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_3c
void* const var_40_3 = &data_5f965d
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
        
        int32_t* edi_1 = (&data_640ff8)[ebx_1]
        
        if (edi_1 == 0)
            int32_t* i = sub_5f6a6e(0x20, 0x40)
            int32_t* i_1 = i
            
            if (i != 0)
                (&data_640ff8)[ebx_1] = i
                data_20f34c8 += 0x20
                
                while (i u< (&data_640ff8)[ebx_1] + 0x800)
                    i[1].w = 0xa00
                    *i = 0xffffffff
                    i[2] = 0
                    i = &i[0x10]
                    int32_t* i_2 = i
                
                result_1 = ebx_1 << 5
                int32_t result_3 = result_1
                *((&data_640ff8)[result_1 s>> 5] + ((result_1 & 0x1f) << 6) + 4) = 1
                ___lock_fhandle(result_1)
            
            break
        
        while (true)
            int32_t* var_24_1 = edi_1
            
            if (edi_1 u>= (&data_640ff8)[ebx_1] + 0x800)
                break
            
            if ((edi_1[1].b & 1) == 0)
                if (edi_1[2] == 0)
                    __lock(0xa)
                    int32_t var_8_2 = 1
                    
                    if (edi_1[2] == 0)
                        sub_5f36f7(&edi_1[3], 0xfa0, 0)
                        edi_1[2] += 1
                    
                    int32_t var_8_3 = 0
                    sub_5f9729()
                
                if (var_28 == 0)
                    EnterCriticalSection(&edi_1[3])
                    
                    if ((edi_1[1].b & 1) != 0)
                        LeaveCriticalSection(&edi_1[3])
                    else if (var_28 == 0)
                        edi_1[1].b = 1
                        *edi_1 = 0xffffffff
                        result_1 = ((edi_1 - (&data_640ff8)[ebx_1]) s>> 6) + (ebx_1 << 5)
                        int32_t result_2 = result_1
                        break
            
            edi_1 = &edi_1[0x10]
        
        if (result_1 != 0xffffffff)
            break
        
        ebx_1 += 1
    
    int32_t var_8_4 = 0xfffffffe
    sub_5f97f1()
    result = result_1
else
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_5f97ed
return result
