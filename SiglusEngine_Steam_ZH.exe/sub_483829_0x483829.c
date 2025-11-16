// 函数: sub_483829
// 地址: 0x483829
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
struct MEMORY_MAPPED_VIEW_ADDRESS lpBaseAddress = arg1[8]
*arg1 = &data_ac7a40
UnmapViewOfFile(lpBaseAddress)
CloseHandle(arg1[7])
CloseHandle(arg1[6])
return sub_48378f(arg1) __tailcall
