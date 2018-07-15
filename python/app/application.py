from flask import Flask, render_template, request, redirect

app = Flask(__name__)

students = []

@app.route('/')
def index():
    return render_template("index.html")

@app.route('/zuck')
def zuck():
    return render_template("zuck.html")

@app.route('/login')
def login():
    return render_template("login.html")

@app.route('/registrants')
def registrants():
    return render_template("registrants.html", students=students)

@app.route('/register', methods=['GET','POST'])
def register():
    if request.method == 'GET':
        return render_template('register.html')
    elif request.method == 'POST':
        name = request.form.get('name')
        dorm = request.form.get('dorm')
        if not name or not dorm:
            return render_template('failure.html')
        students.append(f"{name} from {dorm}")
        return redirect("/registrants")