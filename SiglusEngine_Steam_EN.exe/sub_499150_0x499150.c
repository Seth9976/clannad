// 函数: sub_499150
// 地址: 0x499150
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
sub_4d6960(eax, &data_1b8c87c, &data_1bfdd44, 0x9c40, "ReadFlagTable")
HANDLE result = sub_498df0()
HANDLE hObject = result
void* i = nullptr
void** edi_1 = data_1b8c87c

do
    result = sub_494470(result, nullptr, nullptr, i, hObject)
    i += 1
    *edi_1 = result
    edi_1 = &edi_1[1]
while (i s< 0x2710)

if (hObject == 0xffffffff)
    return result

return CloseHandle(hObject)
