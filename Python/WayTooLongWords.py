def main():
    for i in range(int(input())):
        s = input()
        if len(s) > 10:
            print(f"{s[0]}{len(s)-2}{s[-1]}")
        else:
            print(s)


if __name__ == '__main__':
    main()
