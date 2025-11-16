// 函数: sub_71d6d0
// 地址: 0x71d6d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *arg1

if (eax != 0)
    _fclose(eax)

arg1[0xf] = arg1[0xe]
int32_t result = arg1[0x12]
arg1[0x13] = result
*arg1 = 0
arg1[2] = 0
arg1[0x15] = 0xffffffff
return result
