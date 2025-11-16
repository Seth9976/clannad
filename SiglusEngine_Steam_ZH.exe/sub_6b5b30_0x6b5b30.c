// 函数: sub_6b5b30
// 地址: 0x6b5b30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b9a90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
HRSRC hResInfo = FindResourceW(data_4ebe3a8, 0x99, u"EFFECT")
int32_t* result
int16_t var_30
int32_t var_1c_1

if (hResInfo != 0)
    uint32_t eax_4 = SizeofResource(data_4ebe3a8, hResInfo)
    
    if (eax_4 == 0)
        var_1c_1 = 7
        uint32_t var_20_1 = eax_4
        var_30 = eax_4.w
        sub_52e720(&var_30, u"SizeofResource", 0xe)
        int32_t var_8_1 = 1
        goto label_6b5b9e
    
    HGLOBAL hResData = LoadResource(data_4ebe3a8, hResInfo)
    
    if (hResData == 0)
        var_1c_1 = 7
        HGLOBAL hResData_1 = hResData
        var_30 = hResData.w
        sub_52e720(&var_30, u"LoadResource", 0xc)
        int32_t var_8_2 = 2
        goto label_6b5b9e
    
    int32_t* eax_5 = LockResource(hResData)
    
    if (eax_5 != 0)
        sub_5979b0(arg1, eax_4)
        int32_t* eax_7 = *arg1
        
        if (eax_7 == arg1[1])
            eax_7 = nullptr
        
        sub_748840(eax_7, eax_5, eax_4, eax_2)
        result.b = 1
    else
        int32_t var_34_1 = 7
        int32_t* var_38_1 = eax_5
        int16_t var_48 = eax_5.w
        sub_52e720(&var_48, u"LockResource", 0xc)
        int32_t var_8_3 = 3
        enum WIN32_ERROR eax_6 = GetLastError()
        sub_6b9c90(eax_6, eax_6, eax_5 + 2, &var_48)
        sub_52e8a0(&var_48)
        result.b = 0
else
    var_1c_1 = 7
    HRSRC hResInfo_1 = hResInfo
    var_30 = hResInfo.w
    sub_52e720(&var_30, u"FindResource", 0xc)
    HRSRC hResInfo_2 = hResInfo
label_6b5b9e:
    enum WIN32_ERROR eax_3 = GetLastError()
    sub_6b9c90(eax_3, eax_3, 2, &var_30)
    
    if (var_1c_1 u>= 8)
        j__free(var_30.d)
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
