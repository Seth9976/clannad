// 函数: sub_1ac64c8
// 地址: 0x1ac64c8
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t eax = sub_1ac597f()
*(eax + 8) = *(arg1 + 0x68)
*(eax + 0xc) = *(arg1 + 0x68)
void filename
GetModuleFileNameA(*(arg1 + 0x68), &filename, 0x104)
char* lpString1 = sub_1a93c09(&filename, 0x2e)
*lpString1 = 0
void string1
sub_1ac65e5(&filename, &string1, 0x104)

if (*(arg1 + 0x88) == 0)
    *(arg1 + 0x88) = sub_1a940b0(&string1)

if (*(arg1 + 0x78) == 0)
    void* var_320_2
    void var_310
    
    if (sub_1ab24ba(0xe000, &var_310, 0x100) == 0)
        var_320_2 = *(arg1 + 0x88)
    else
        var_320_2 = &var_310
    
    *(arg1 + 0x78) = sub_1a940b0(var_320_2)

char* result = *(arg1 + 0x78)
*(eax + 0x10) = result

if (*(arg1 + 0x8c) == 0)
    lstrcpyA(lpString1, ".HLP")
    result = sub_1a940b0(&filename)
    *(arg1 + 0x8c) = result
    *lpString1 = 0

if (*(arg1 + 0x90) == 0)
    lstrcatA(&string1, ".INI")
    result = sub_1a940b0(&string1)
    *(arg1 + 0x90) = result

return result
