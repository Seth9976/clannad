// 函数: sub_62f5b0
// 地址: 0x62f5b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c104e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = data_4ebee38
data_4ebee38 = 0

if (eax_3 != 0)
    (*(*eax_3 + 8))(eax_3)

int32_t* esi = data_bac4b4
HICON hIcon = *esi

if (hIcon != 0)
    DestroyIcon(hIcon)
    *esi = 0

HICON hIcon_1 = esi[1]

if (hIcon_1 != 0)
    DestroyIcon(hIcon_1)
    esi[1] = 0

int32_t lpMem = *(arg1 + 0x4b008)

if (lpMem != 0)
    HeapFree(GetProcessHeap(), HEAP_ZERO_MEMORY, lpMem)

int16_t var_2c
int16_t* lpFileName_1 = sub_6299b0(&var_2c)
PWSTR lpFileName

if (*(lpFileName_1 + 0x14) u< 8)
    lpFileName = lpFileName_1
else
    lpFileName = *lpFileName_1

enum FILE_FLAGS_AND_ATTRIBUTES dwFileAttributes = GetFileAttributesW(lpFileName) & 0xfffffffe

if (*(lpFileName_1 + 0x14) u>= 8)
    lpFileName_1 = *lpFileName_1

SetFileAttributesW(lpFileName_1, dwFileAttributes)
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
var_2c = 0
int32_t eax_7 = data_bac3a0
int32_t var_1c = 0

if ((eax_7.b & 1) == 0)
    data_bac3a0 = eax_7 | 1
    int32_t var_8_1 = 0
    sub_58fa00()
    _atexit(j_sub_58fec0)
    int32_t var_8_2 = 0xffffffff

sub_6ba960(&data_bac3a4)
sub_60dfd0(arg1 + 0x55660)
BOOL result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
