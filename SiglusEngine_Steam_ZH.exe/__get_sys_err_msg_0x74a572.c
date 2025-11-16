// 函数: __get_sys_err_msg
// 地址: 0x74a572
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg1

if (esi s< 0 || esi s>= data_b4cfe0)
    esi = data_b4cfe0

return (&data_ab1c50)[esi]
