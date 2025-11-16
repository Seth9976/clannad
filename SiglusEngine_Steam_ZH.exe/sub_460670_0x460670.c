// 函数: sub_460670
// 地址: 0x460670
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HANDLE hFile = *(arg1 + 0x30)
int32_t buffer
__builtin_strncpy(&buffer, "xof 0304bin 0032", 0x24)
uint32_t numberOfBytesWritten
BOOL eax = WriteFile(hFile, &buffer, 0x20, &numberOfBytesWritten, nullptr)
int32_t eax_1 = neg.d(eax)
return (sbb.d(eax_1, eax_1, eax != 0) & 0x7ff8fff2) - 0x7ff8fff2
