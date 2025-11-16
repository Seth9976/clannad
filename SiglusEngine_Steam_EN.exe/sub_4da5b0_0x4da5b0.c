// 函数: sub_4da5b0
// 地址: 0x4da5b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_get_stats@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_d0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* ppv = arg5
HRESULT result

if (arg4 != 0)
    *arg4 = 0
    *arg5 = 0
    uint32_t eax_4
    
    if (arg3 != 0)
        eax_4 = zx.d(*arg3)
    
    if (arg3 == 0 || eax_4.w == 0)
        result = 0
    else if (eax_4 == 0x4d || eax_4 == 0x6d)
        uint32_t eax_5 = zx.d(arg3[1])
        
        if (eax_5 != 0x53 && eax_5 != 0x73)
            goto label_4da6b2
        
        uint32_t eax_6 = zx.d(arg3[2])
        
        if (eax_6 != 0x48 && eax_6 != 0x68)
            goto label_4da6b2
        
        uint32_t eax_7 = zx.d(arg3[3])
        
        if (eax_7 != 0x54 && eax_7 != 0x74)
            goto label_4da6b2
        
        uint32_t eax_8 = zx.d(arg3[4])
        
        if (eax_8 != 0x4d && eax_8 != 0x6d)
            goto label_4da6b2
        
        uint32_t eax_9 = zx.d(arg3[5])
        
        if ((eax_9 != 0x4c && eax_9 != 0x6c) || arg3[6] != 0x3a)
            goto label_4da6b2
        
        HRESULT result_1 = CoCreateInstance(" i3%", 0, CLSCTX_INPROC_SERVER, &data_61d6e0, arg4)
        *ppv = 1
        result = result_1
    else
    label_4da6b2:
        void var_ac
        void* var_b0 = &var_ac
        sub_4df460(&var_b0, arg3, 3)
        PSTR eax_11 = sub_4d9720(var_b0)
        void* ecx_3 = var_b0
        
        if (ecx_3 != &var_ac)
            _free(ecx_3)
        
        if (eax_11 == 0)
            if (sub_4d9240(arg3) s>= 0xff)
                result = E_FAIL
            else
                GUID rclsid
                GUID* var_d4_4 = &rclsid
                HRESULT result_3
                
                if (*arg3 != 0x7b)
                    result_3 = CLSIDFromProgID(arg3, var_d4_4)
                else
                    result_3 = CLSIDFromString(arg3, var_d4_4)
                
                if (result_3 s< 0)
                    result = result_3
                else if (SysStringLen(arg6) == 0)
                    result = CoCreateInstance(&rclsid, 0, CLSCTX_INPROC_SERVER, &data_61d6e0, arg4)
                else
                    ppv = nullptr
                    int32_t var_8_1 = 0
                    HRESULT result_4 = CoGetClassObject(&rclsid, 1, nullptr, &data_61d630, &ppv)
                    
                    if (result_4 s>= 0)
                        char* ppv_1 = ppv
                        result_4 = (*(*ppv_1 + 0x1c))(ppv_1, 0, 0, &data_61d6e0, arg6, arg4)
                    
                    int32_t var_8_2 = 0xffffffff
                    char* ppv_2 = ppv
                    
                    if (ppv_2 == 0)
                        result = result_4
                    else
                        (*(*ppv_2 + 8))(ppv_2)
                        result = result_4
        else
            HRESULT result_2 =
                CoCreateInstance(&data_61d640, 0, CLSCTX_INPROC_SERVER, &data_61d6e0, arg4)
            *ppv = 1
            result = result_2
else
    result = E_POINTER

fsbase->NtTib.ExceptionList = ExceptionList
sub_5f02dd(eax_2 ^ &__saved_ebp)
return result
