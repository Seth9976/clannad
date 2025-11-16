// 函数: sub_6b4940
// 地址: 0x6b4940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9caea0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = arg2[5] u< 8
void** lpValueName = arg3
void** lpData = arg4
HKEY var_48 = nullptr

if (not(cond:0))
    arg2 = *arg2

enum WIN32_ERROR eax_3 = RegCreateKeyExW(0x80000001, arg2, 0, nullptr, REG_OPTION_RESERVED, 
    KEY_WRITE, nullptr, &var_48, nullptr)
enum WIN32_ERROR result

if (eax_3 == NO_ERROR)
    struct HKEY__** eax_5
    int32_t* ecx_1
    eax_5, ecx_1 = sub_745f3f(4)
    struct HKEY__** edx_1 = eax_5
    
    if (edx_1 == 0)
        edx_1 = nullptr
    else
        *edx_1 = var_48
    
    struct HKEY__** var_50_1 = edx_1
    int32_t* var_4c = nullptr
    int32_t var_8_2 = 1
    int32_t* var_68_2 = &var_4c
    sub_6b7070(&var_4c, edx_1, ecx_1)
    int32_t var_8_3 = 2
    int32_t eax_8 = lpData[4]
    
    if (lpData[5] u>= 8)
        lpData = *lpData
    
    if (lpValueName[5] u>= 8)
        lpValueName = *lpValueName
    
    result = RegSetValueExW(var_48, lpValueName, 0, REG_SZ, lpData, (eax_8 << 1) + 2)
    enum WIN32_ERROR ebx
    
    if (result == NO_ERROR)
        ebx.b = 1
    else
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        int16_t var_2c = 0
        sub_52e720(&var_2c, u"Cregistry_key", 0xd)
        var_8_3.b = 3
        sub_6b9c90(&var_2c, result, 2, &var_2c)
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_2 = 7
        int32_t var_1c_2 = 0
        ebx.b = 0
        var_2c = 0
    
    int32_t var_8_4 = 0xffffffff
    int32_t* esi_1 = var_4c
    
    if (esi_1 != 0)
        bool cond:2_1 = esi_1[1] != ERROR_INVALID_FUNCTION
        esi_1[1]
        esi_1[1] -= 1
        
        if (not(cond:2_1))
            (*(*esi_1 + 4))(eax_2)
            int32_t edi = esi_1[2]
            esi_1[2] -= 1
            
            if (edi == 1)
                (*(*esi_1 + 8))()
    
    result.b = ebx.b
else
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    int16_t var_44 = 0
    sub_52e720(&var_44, u"RegCreateKeyEx", 0xe)
    int32_t var_8_1 = 0
    sub_6b9c90(&var_44, eax_3, 2, &var_44)
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
