// 函数: ?_Atexit@@YAXP6AXXZ@Z
// 地址: 0x76140d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_b5b160

if (eax == 0)
    noreturn _abort() __tailcall

data_b5b160 = eax - 1
int32_t result = EncodePointer(arg1)
*((data_b5b160 << 2) + &data_b9c040) = result
return result
