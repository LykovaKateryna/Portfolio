import sys
def inputText():
    print("Enter text. To finish press ctrl+z")
    text = sys.stdin.read()
    text[:len(text)-1]
    return text
def writeTextFile(text, textFileName):
    textFile = open(textFileName, 'wt')
    textFile.write(text)
    textFile.close()
def readTextFile(textFileName):
    textFile = open(textFileName, "rt")
    text = textFile.read()
    textFile.close()
    text = text[:len(text)-1]
    return text
def changeText(text):
    changedText = ''
    textLines = text.split('\n')
    for textLine in textLines:
        for i in range(len(textLine)):
            if textLine[i] == '1':
                changedText += '0'
            elif textLine[i] == '0':
                changedText += '1'
            else:
                changedText += textLine[i]
        changedText += '\n'
    return changedText
def outputTextFile(textFileName):
    textFile = open(textFileName, 'rt')
    text = textFile.read()
    textFile.close()
    print(text)