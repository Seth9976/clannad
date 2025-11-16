// 函数: sub_41bd70
// 地址: 0x41bd70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ecx
int32_t var_50c = ecx
void var_508
sub_4c84d0(&var_508, &data_613a1c)
sub_41bcf0(&var_508)
int32_t result = data_1333e48

if (result s< 0x18ffd)
    *(result + &data_1333e4c:3) = 0xa0d
    data_1333e48 = result + 1
    
    if (result + 1 u>= 0x19000)
        ___report_rangecheckfailure()
        noreturn
    
    *(result + 0x1333e51) = 0
    result += 2
    data_1333e48 = result

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
