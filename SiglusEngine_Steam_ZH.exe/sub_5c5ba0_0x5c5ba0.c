// 函数: sub_5c5ba0
// 地址: 0x5c5ba0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb678
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
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
            goto label_5c5c89
        
        uint32_t eax_6 = zx.d(arg3[2])
        
        if (eax_6 != 0x48 && eax_6 != 0x68)
            goto label_5c5c89
        
        uint32_t eax_7 = zx.d(arg3[3])
        
        if (eax_7 != 0x54 && eax_7 != 0x74)
            goto label_5c5c89
        
        uint32_t eax_8 = zx.d(arg3[4])
        
        if (eax_8 != 0x4d && eax_8 != 0x6d)
            goto label_5c5c89
        
        uint32_t eax_9 = zx.d(arg3[5])
        
        if ((eax_9 != 0x4c && eax_9 != 0x6c) || arg3[6] != 0x3a)
            goto label_5c5c89
        
        HRESULT result_1 = CoCreateInstance(" i3%", 0, CLSCTX_INPROC_SERVER, &data_af2640, arg4)
        *ppv = 1
        result = result_1
    else
    label_5c5c89:
        
        if (sub_5c4d40(arg3) == 0)
            if (sub_5c48b0(arg3) s>= 0xff)
                result = E_FAIL
            else
                GUID rclsid
                GUID* var_44_3 = &rclsid
                PWSTR var_48_1 = arg3
                HRESULT result_3
                
                if (*arg3 != 0x7b)
                    result_3 = CLSIDFromProgID(var_48_1, var_44_3)
                else
                    result_3 = CLSIDFromString(var_48_1, var_44_3)
                
                if (result_3 s< 0)
                    result = result_3
                else if (SysStringLen(arg6) == 0)
                    result = CoCreateInstance(&rclsid, 0, CLSCTX_INPROC_SERVER, &data_af2640, arg4)
                else
                    ppv = nullptr
                    int32_t var_8_1 = 0
                    HRESULT result_4 = CoGetClassObject(&rclsid, 1, nullptr, &data_af2590, &ppv)
                    
                    if (result_4 s>= 0)
                        char* ppv_1 = ppv
                        result_4 = (*(*ppv_1 + 0x1c))(ppv_1, 0, 0, &data_af2640, arg6, arg4)
                    
                    int32_t var_8_2 = 0xffffffff
                    char* ppv_2 = ppv
                    
                    if (ppv_2 == 0)
                        result = result_4
                    else
                        (*(*ppv_2 + 8))(ppv_2)
                        result = result_4
        else
            HRESULT result_2 =
                CoCreateInstance(&data_af25a0, 0, CLSCTX_INPROC_SERVER, &data_af2640, arg4)
            *ppv = 1
            result = result_2
else
    result = E_POINTER

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
