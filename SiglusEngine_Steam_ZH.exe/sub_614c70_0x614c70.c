// 函数: sub_614c70
// 地址: 0x614c70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf1d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx
ebx.b = arg1
struct _EXCEPTION_REGISTRATION_RECORD** result = data_bac400

if (result s> 0)
    result.b = 0
else
    data_bac400 = result + 1
    sub_5ba060()
    
    if (ebx.b != 0)
        sub_6f60f0(0)
        HWND hWnd = *(data_bac454 + 4)
        
        if (hWnd != 0)
            InvalidateRect(hWnd, nullptr, 0)
        
        sub_6ba500(&data_4ebe3a8)
    
    int32_t* eax_6 = *(data_bac454 + 0x128)
    int32_t eax_7 = (*(*eax_6 + 0x11c))(eax_6)
    void var_9c
    
    if (eax_7 s>= 0)
        int32_t* eax_11 = data_b89654
        int32_t eax_12 = (*(*eax_11 + 0x40))(eax_11)
        
        if (eax_12 s>= 0)
            TPI1::QueryTiForCVRecord()
            result.b = 1
        else
            int16_t* eax_13
            int32_t edx_2
            eax_13, edx_2 = sub_52e820(&var_9c, u"OnLostDevice")
            sub_6f1a40(eax_13, edx_2, eax_12, var_9c)
            int32_t var_5c
            int16_t* eax_14 = sub_6b9ed0(&var_5c)
            int32_t var_8_2 = 2
            int16_t var_2c
            int16_t* eax_15 = sub_548cb0(eax_14, 0xaf3ba8, &var_2c, eax_14)
            var_8_2.b = 3
            sub_684160(data_bac424, 2, eax_15)
            int32_t var_18
            
            if (var_18 u>= 8)
                j__free(var_2c.d)
            
            int32_t var_18_1 = 7
            int32_t var_1c_1 = 0
            var_2c = 0
            int32_t var_48
            
            if (var_48 u< 8)
                result.b = 0
            else
                j__free(var_5c)
                result.b = 0
    else
        int16_t* eax_8
        int32_t edx_1
        eax_8, edx_1 = sub_52e820(&var_9c, u"OnLostDevice")
        sub_6f1a40(eax_8, edx_1, eax_7, var_9c)
        int32_t var_74
        int16_t* eax_9 = sub_6b9ed0(&var_74)
        int32_t var_8_1 = 0
        int16_t var_44
        int16_t* eax_10 = sub_548cb0(eax_9, 0xaf3b84, &var_44, eax_9)
        var_8_1.b = 1
        sub_684160(data_bac424, 2, eax_10)
        int32_t var_30
        
        if (var_30 u>= 8)
            j__free(var_44.d)
        
        int32_t var_30_1 = 7
        int32_t var_34_1 = 0
        var_44 = 0
        int32_t var_60
        
        if (var_60 u>= 8)
            j__free(var_74)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
