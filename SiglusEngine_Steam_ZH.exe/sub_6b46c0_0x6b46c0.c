// 函数: sub_6b46c0
// 地址: 0x6b46c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cae57
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = arg2[5] u< 8
int32_t* lpValueName = arg4
HKEY var_430 = nullptr

if (not(cond:0))
    arg2 = *arg2

enum WIN32_ERROR eax_3 = RegOpenKeyExW(arg3, arg2, 0, KEY_READ, &var_430)
void* result
int16_t var_42c

if (eax_3 == NO_ERROR)
    struct HKEY__** eax_5
    int32_t* ecx_1
    eax_5, ecx_1 = sub_745f3f(4)
    struct HKEY__** edx_1 = eax_5
    
    if (edx_1 == 0)
        edx_1 = nullptr
    else
        *edx_1 = var_430
    
    struct HKEY__** var_440_1 = edx_1
    int32_t* var_43c = nullptr
    int32_t var_8_2 = 1
    int32_t* var_458_3 = &var_43c
    sub_6b7070(&var_43c, edx_1, ecx_1)
    int32_t var_8_3 = 2
    bool cond:1_1 = lpValueName[5] u< 8
    enum REG_VALUE_TYPE type = REG_NONE
    uint32_t lpcbData = 0x400
    
    if (not(cond:1_1))
        lpValueName = *lpValueName
    
    void data
    enum WIN32_ERROR eax_8 =
        RegQueryValueExW(var_430, lpValueName, nullptr, &type, &data, &lpcbData)
    int32_t var_418_1 = 7
    int32_t var_41c_1 = 0
    int32_t* ebx
    
    if (eax_8 == NO_ERROR)
        enum REG_VALUE_TYPE type_1 = type
        var_42c = 0
        sub_5b2590(&var_42c, &data, &(&__saved_ebp)[0x100] - 0x412)
        var_8_3.b = 4
        
        if (arg5 != &var_42c)
            sub_52e3c0(arg5, &var_42c, 0, 0xffffffff)
        
        if (var_418_1 u>= 8)
            j__free(var_42c.d)
        
        ebx.b = 1
    else
        var_42c = 0
        sub_52e720(&var_42c, u"RegQueryValueEx", 0xf)
        var_8_3.b = 3
        sub_6b9c90(&var_42c, eax_8, 2, &var_42c)
        
        if (var_418_1 u>= 8)
            j__free(var_42c.d)
        
        ebx.b = 0
    
    int32_t var_8_4 = 0xffffffff
    int32_t* esi_1 = var_43c
    
    if (esi_1 != 0)
        bool cond:2_1 = esi_1[1] != 1
        esi_1[1]
        esi_1[1] -= 1
        
        if (not(cond:2_1))
            (*(*esi_1 + 4))(eax_2)
            int32_t edi_1 = esi_1[2]
            esi_1[2] -= 1
            
            if (edi_1 == 1)
                (*(*esi_1 + 8))()
    
    result.b = ebx.b
else
    int32_t var_418 = 7
    int32_t var_41c = 0
    var_42c = 0
    sub_52e720(&var_42c, u"RegOpenKeyEx", 0xc)
    int32_t var_8_1 = 0
    sub_6b9c90(&var_42c, eax_3, 2, &var_42c)
    
    if (var_418 u>= 8)
        j__free(var_42c.d)
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
