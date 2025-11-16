// 函数: sub_71d540
// 地址: 0x71d540
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *arg1

if (eax != 0)
    _fclose(eax)

arg1[0xf] = arg1[0xe]
int32_t eax_2 = arg1[0x12]
arg1[0x13] = eax_2
*arg1 = 0
arg1[2] = 0
arg1[0x15] = 0xffffffff

if (eax_2 != 0)
    j__free(eax_2)
    arg1[0x12] = 0
    arg1[0x13] = 0
    arg1[0x14] = 0

int32_t result = arg1[0xe]

if (result != 0)
    result = j__free(result)
    arg1[0xe] = 0
    arg1[0xf] = 0
    arg1[0x10] = 0

return result
