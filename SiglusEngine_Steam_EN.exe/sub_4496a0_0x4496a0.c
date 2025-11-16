// 函数: sub_4496a0
// 地址: 0x4496a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
enum MESSAGEBOX_RESULT result = __security_cookie ^ &__saved_ebp
enum MESSAGEBOX_RESULT result_1 = result
bool cond:0 = data_1af44f8 == 0
int32_t edx = data_1af4508
int32_t ecx = data_1af44e4
data_1af44dc = 0

if (not(cond:0) && data_1af44e8 != 0 && (edx != 0 || data_12c109c == edx))
    data_1af44dc = 1
    
    if (ecx == 0)
        result = IDCANCEL
        
        if (data_12a40b0 == 1)
            result = IDABORT
        
        data_1af44dc = result

bool cond:1 = data_1af44f8 == 0
data_1af44d8 = 0
data_1af44d4 = 0

if (not(cond:1) && data_1af44e8 != 0 && edx != 0 && ecx == 0 && data_1af4514 != ecx
        && data_1af450c != ecx)
    void* __saved_ebx_1 = &data_108f5cc
    data_1af44d4 = 1
    void caption
    sub_4c84d0(&caption, 0x61738c)
    result = MessageBoxA(nullptr, 0x61739c, &caption, MB_YESNO)
    
    if (result == IDYES)
        data_1af44d8 = 1
        data_12dc4c0 = 1
        data_13132e8 = 1

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
