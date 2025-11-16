// 函数: sub_1a99cb6
// 地址: 0x1a99cb6
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

uint32_t i = arg1
int32_t ecx = 0
void* result = &data_1bfc488

while (i != *result)
    result += 8
    ecx += 1
    
    if (result u>= 0x1bfc518)
        break

if (i == *((ecx << 3) + &data_1bfc488))
    result = data_1c07710
    
    if (result == 1)
    label_1a99de9:
        OVERLAPPED* __saved_edi_3 = nullptr
        uint32_t* lpNumberOfBytesWritten = &arg1
        uint32_t nNumberOfBytesToWrite = sub_1a91a20((&data_1bfc48c)[ecx * 2])
        return WriteFile(GetStdHandle(STD_ERROR_HANDLE), (&data_1bfc48c)[ecx * 2], 
            nNumberOfBytesToWrite, lpNumberOfBytesWritten, __saved_edi_3)
    
    if (result == 0 && data_1bf9d64 == 1)
        goto label_1a99de9
    
    if (i != 0xfc)
        void filename
        
        if (GetModuleFileNameA(nullptr, &filename, 0x104) == 0)
            sub_1a91830(&filename, "<program name unknown>")
        
        void* edi_1 = &filename
        
        if (sub_1a91a20(&filename) + 1 u> 0x3c)
            int32_t var_1b8_2 = 3
            void var_1e3
            edi_1 = sub_1a91a20(&filename) + &var_1e3
            sub_1a91920(edi_1, "...", var_1b8_2)
        
        char var_a4[0xa0]
        sub_1a91830(&var_a4, "Runtime Error!\n\nProgram: ")
        sub_1a91840(&var_a4, edi_1)
        sub_1a91840(&var_a4, "\n\n")
        sub_1a91840(&var_a4, (&data_1bfc48c)[ecx * 2])
        return sub_1a9c6c8(&var_a4, "Microsoft Visual C++ Runtime Library", 0x12010)

return result
