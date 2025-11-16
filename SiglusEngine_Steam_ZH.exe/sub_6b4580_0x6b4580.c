// 函数: sub_6b4580
// 地址: 0x6b4580
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cadf0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = arg2[5] u< 8
HKEY phkResult = nullptr

if (not(cond:0))
    arg2 = *arg2

enum WIN32_ERROR eax_3 = RegOpenKeyExW(0x80000002, arg2, 0, KEY_READ, &phkResult)
void* result

if (eax_3 == NO_ERROR)
    struct HKEY__** eax_5
    int32_t* ecx_1
    eax_5, ecx_1 = sub_745f3f(4)
    struct HKEY__** edx_1 = eax_5
    
    if (edx_1 == 0)
        edx_1 = nullptr
    else
        *edx_1 = phkResult
    
    struct HKEY__** var_38_1 = edx_1
    int32_t* var_34 = nullptr
    int32_t var_8_2 = 1
    int32_t* var_48_3 = &var_34
    sub_6b7070(&var_34, edx_1, ecx_1)
    int32_t var_8_3 = 0xffffffff
    int32_t* esi_1 = var_34
    
    if (esi_1 != 0)
        bool cond:1_1 = esi_1[1] != 1
        esi_1[1]
        esi_1[1] -= 1
        
        if (not(cond:1_1))
            (*(*esi_1 + 4))(eax_2)
            int32_t edi_1 = esi_1[2]
            esi_1[2] -= 1
            
            if (edi_1 == 1)
                (*(*esi_1 + 8))()
    
    result.b = 1
else
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, u"RegOpenKeyEx", 0xc)
    int32_t var_8_1 = 0
    sub_6b9c90(&var_2c, eax_3, 2, &var_2c)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
