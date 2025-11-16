// 函数: reallive_dll_func_load
// 地址: 0x10001660
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??0system_error@std@@QAE@HABVerror_category@1@PBD@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
data_1001b4c8 = arg1
uint32_t esi = zx.d(SteamAPI_Init(eax_2))
data_1001b4bc = esi
data_1001b4b4 = _malloc(0x16)

if (esi != 0)
    int32_t* eax_6 = sub_10002eea(0x50)
    arg1 = eax_6
    int32_t var_8_1 = 0
    int32_t* eax_7
    
    if (eax_6 == 0)
        eax_7 = nullptr
    else
        _memset(eax_6, 0, 0x50)
        eax_7 = Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(eax_6)
    
    int32_t var_8_2 = 0xffffffff
    data_1001b4c0 = eax_7
    (**SteamUserStats())()

fsbase->NtTib.ExceptionList = ExceptionList
return 1
