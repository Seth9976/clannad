// 函数: sub_4630eb
// 地址: 0x4630eb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HGLOBAL hResData = arg1[5]
*arg1 = &data_ac3c0c

if (hResData != 0)
    FreeResource(hResData)

int32_t edi
int32_t var_8_2 = edi

if (arg1[4] != 0xffffffff)
    UnmapViewOfFile(arg1[6])
    CloseHandle(arg1[4])

HANDLE hObject = arg1[3]

if (hObject != 0xffffffff)
    CloseHandle(hObject)

if ((arg1[0xc].b & 1) != 0)
    _free(arg1[6])

int32_t* eax = arg1[2]
(*(*eax + 8))(eax)
sub_4617a2(&arg1[0x11])
return sub_460924(&arg1[0xd]) __tailcall
