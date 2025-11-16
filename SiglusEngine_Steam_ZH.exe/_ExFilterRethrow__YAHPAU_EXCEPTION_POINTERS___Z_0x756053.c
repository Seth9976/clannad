// 函数: ?ExFilterRethrow@@YAHPAU_EXCEPTION_POINTERS@@@Z
// 地址: 0x756053
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax_1 = *arg1

if (*eax_1 != 0xe06d7363 || eax_1[4] != 3
        || (eax_1[5] != 0x19930520 && eax_1[5] != 0x19930521 && eax_1[5] != 0x19930522)
        || eax_1[7] != 0)
    return 0

__getptd()[0xeb] = 1
return 1
