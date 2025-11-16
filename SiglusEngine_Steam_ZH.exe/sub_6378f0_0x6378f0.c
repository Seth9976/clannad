// 函数: sub_6378f0
// 地址: 0x6378f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 + 8)

if (result != 0)
    result = _free(result)
    *(arg1 + 8) = 0

if (arg1[1] != 0)
    result = closesocket(*(arg1 + 4))
    arg1[1] = 0

if (*arg1 != 0)
    result = WSACleanup()
    *arg1 = 0

*(arg1 + 0xc) = 0
return result
